# Meterpreter (Windows Hacking)
Meterpreter là một payload được sử dụng rộng rãi trong tấn công hệ điều hành Windows, có thể áp dụng trên hầu hết các phiên bản của Windows hiện nay. Sau khi khai thác thành công, Meterpreter sẽ là một remote shell (chương trình nhập lệnh điều khiển từ xa) cho phép hacker thực hiện các lệnh tấn công hay các công cụ trên hệ thống mục tiêu. Meterpreter có rất nhiều chức năng như quản lý file, upload/download, chụp ảnh màn hình, chụp ảnh webcam, ghi âm,... 

Payload

Trong mạng máy tính dữ liệu được vận chuyển là payload, thường được gói trong một frame, bao gồm framing bít và một frame check sequence. Thí dụ là Ethernet frame, Point-to-Point Protocol (PPP) frame, Kênh sợi quang frame, và V.42 modem frame.

Trong an ninh máy tính, payload là một phần của một malware như sâu máy tính or virus, một đoạn code được chạy trên máy nạn nhân, dùng để thực hiện một số hoạt động độc hại nào đó, như hủy bỏ dữ liệu, gởi spam hay mã hóa dữ liệu. Thêm vào payload, những malware như vậy có thêm overhead code để lan truyền nó, hay để tránh bị nhận diện.

Trong lập trình máy tính, thuật ngữ này được sử dụng, để phân biệt giao thức overhead với dữ liệu thực tế. Ví dụ: phản ứng JSON của dịch vụ web có thể là:

```
	{  
	   "data":{  
		  "message":"Hello, world!"
	   }
	}
```

Đoạn "Hello, world!" là payload, trong khi phần còn lại là giao thức overhead.


## Usage
### Development environment
+ [Download](https://www.arduino.cc/en/Main/Software) Arduino for the Operating system like Windows, MacOS, Linux.
+ To transfer the created scripts to the Digispark then install additional drivers
  
  First, we download the Arduino software from the above web page and install it on our windows system:

  ![](https://lh3.googleusercontent.com/odj2U1ZQrqD0mXpMmzRnUz8sdHXRNaIFaKeDKAzboqmRuINsPhK9kauyg5GbwK3PL8E2eTQS1u8MEcdFYbP0_RFnmhhYeprgAuGv-IRE3GnpFXvmxgH_x4NjyJpoP6EKgOocICp-wYOpjVnxTmEgZhCKhvykSKydKFoeD7OkCnbGxq5G-Unsko4QSqxCFPvkgnv94ByGR4mVkItIFKGWLtxZBmj_SvzBEap0UgRg14JEnNTX76lN3_9T-g9LEMmWOMrNNCyoG3O6QP9tdz04KdizNB68qVSQyfkCPlg6PmKKZutRyZ-usyT4x2tT3IGxK0hSVDEyaPh0xQks1jpGNBJokvf-dvZkXL3lSvfxKLjhBpBWwDSwxDAXMJ3TeWVhaCLo7bkVg3hL-_a74j2GeS46cytNnNVRQUURRxKcKSWChDVEeGijhioYnzlRaGDDPJXZmj5tBM73gHQ2m8I2fFmLXituny6q_nJrRvZqKq3yPL2K0jNS1AjwpN1zJDyZd-kMFMD-jypf5FTTykm2GzVOgB6itKL6sjKWW4MwB4KSafb8nW6CFoQQzWTfMjXVVIXPPDAVvXUTizcPpS3V033MfojMgv3o_yH6xyboAEzdWRLtR2HQpChE9MztUm8NbVi_GVFA0ZuxpHv8gywL47bs1rCdQe1n_CGA7pbzrZvbUElFvdOZicoL1jmPnZS0D6qQYCIEFdsk7Pzz=w1024-h341-no)
  
  Next we need the Digistump drivers. The corresponding archive (Digistump.Drivers.zip) is available at this [URL](https://github.com/digistump/DigistumpArduino/releases).

  ![](https://lh3.googleusercontent.com/4JamgKF5LAgKJujv7s1YalKtlG7RgfzAxyA8KynH7D08FRFtFKfk0dLucagdS5-9JPFzaoBH0LeDhy8cO91JsrPG3h2IiXnSKGLUQy4MkiboUyI_HqCEXG4KepFjkRSwvfSI4DYxztM1U0tkd0xSEZWBvLqCAzkpEWAIETzype2bcCHiG9hna3VtcaXy-bM6AnSJgUWsBdSL1VDSwle6XTI10hKhX-psAEfoHbRu8C6XkWRB5pJaO_9tYsD_OH81aUtUYmS2NxOnu5myXm98yccJpoEcPqb_i9sNYQhEc7J9o3CSfXHGtjvE4bqz1Ru7d4hw6EWXAbI3NMZz65qMaPjm8Y2VLnpSKgxw3dXCy70qSHm-ro8EuTH-Ez6DiqdLwMIF4xe1zoLcIcTUkLzOv8OwLYUyeJY0IKHowWSrgtELDvkdIPEVnpAYYH02hfBclwHiTsg5rXRqKaXRgB5nEcpSKu5tdTe5sS8s3KfK1nmv0n2qfj9JHvnrAclxVUSOYjZVk700QIrgxbfzw2eqFIO2NzsImRt40s6GqD_ngVvp4PhJdpaI4Ldgid3vYdRw0OpLZdgp3iU1yJJklgJKOc317J20rLLERDi-vTj413EMa15DfG13obOYXv2DI6OGVZAowrH6TxL7Y52mFgc2HZnjbxjhRpNj1ZLoFx-JRI2vwUxILJUykJvZHMrOqme25A4sOA58al4-WE35=w1003-h606-no)
  
  Once the zip file has been unpacked anywhere, you can install the **DPinst64** file 
  
  ![](https://lh3.googleusercontent.com/239Tk__diAbUZ224zlnYHkFOr1zhSJ0mXUgpZkbawvuB1fi6klzm0gqO64wMx9JaWyb7shZ19urM6pJ4pM3l8HzzSrQvNWJyYUhbcty44oQzxxm_5Q0lPtb8yH9WqYbtxI5czW_d21_14dBS2Z-pGCpMrhCAWVwDCEZD6x9kuUhryH3qbEalof91eiDRL4HQ6FwkDrKFl6IdsM6cEiH_1dsSqssQIBr_B8Rn3eeoqhHXW93URrbcbxUW40Glp58mK4taBYXdeam63f2PGC1Q092PtTuePj01Tav1D8I9Gpd8PSgI9kJzGyQzoGXuXpxhyzyJUzZvXINgL1TBd0gV0IuOYaBplKaUqFVEbTE1L7VqJZYf1qwgtNygKxma10Knb3FTsbC9-BYfiNohHl6K4zTqfmKPlM7QbRgwc9xWfOAeiQpRmtNEJm_Xyl2EvnhHDlPC0rYY3o5Y15o5JwRKivTjq-USO_rGoku4843U5mJhEMr1l9r0xBtow0sqbvmdFhKebkuqBfNUVaFe-EKLXnEgnxfkcH0BY7bx9VKK1ML2BjALtyMrxMqXaxay9rxTsczUEK8RfzJp8jJq2lAH5VEeovjyGsoUhVeTdKiF15v8SG90V8-kiiJVoqmEUy4vwfhVc4dWZKi2guBz5tbUhNlbRFqLdpKTZ4Dj7TIFTRu_fCSKX4RmnoGWnsWcihDYciZMNfd-JyCAcku5=w621-h392-no)
  
  For this purpose, some device drivers are installed, which are available after completion on our Windows PC.
  
  The next step is to set a URL for an additional board administrator. To do this, open the following window under **File - Preferences** and enter the following URL: http://digistump.com/package_digistump_index.json

  ![](https://lh3.googleusercontent.com/1LgNZBzb_481qEJtQFGN0Xwrz6klXFNwTJIkWo_pTpyy4u6meC_fDAaYot9aUoCBKLAg_1Bv8cL2jSkE-iMC2-ZUo1Co1Gxai4gciRHzMjy6Y2VeP87Wu4UFrqE3-usxrsgOsdDrb7R2-YUpIAC9tck9a6sjCZibykLFT-PXL4qQ8eRtSY6R07Xl1z9EZJIVVMc9VoIkQm1nypkVjHd-Sxsy-RrBIXMl4jsO6-H2R_Jn37fycuyPwRyfWfCrf1I8YuEaIMZrwbvcbAO4JIN5xBOROv9AiDE2fMckjJNBH83XPJQksmoWCPO00Mp7ctPwm4SgtR0rbi3QMYY11uyxLHuxRukTMLdwwqPtHO9FgstUAIiLFE0GyfdU4xekWtX-Loi1LT6MytDNNZkhnoS1rDOKbZv75XNwrgXhLpcOUrDGcY5SJpynIbDQPUF_GmkEoVyruANafm6E2D4SFkYTjUxvIIvsTMETB2PrROE_OqflutB7I_S079tcb4U98ElyFBpwCmgCKj_WYWlHbMCjsWpoayMSlG3zRtRns6nMVJXEsVeay73VOXsPuCkciT-hLjp7QyrW2IsPH8JqXjsErIbGrvCMhjf8U5T3qn7rtlRLii1sz5qWGhkW1NTKSJZkoYEJ7n4RIBLP_pdpFlBZIXpQhfVNVmYqayxvsANZbKA6ltI9v7kMR4aTeJaPoBCZAZv2VAuq_Y7Y9Ba8=w734-h481-no)
  
  Go to the **Tools** menu and then the **Board** submenu - select **Boards Manager** and then from the type drop down select **Contributed**:
  
  Select the **Digistump AVR Boards** package and click the **Install** button.
  
  ![](https://lh3.googleusercontent.com/igYWRh-AHoOM9vHI9GEF74JYblzpXknu8YOhofIRY80gUgLUU28hQOyt3_xWxv2gXV5wRjxloHPvhjJ0az1Ya7-CCf4JVcJZe355BnpWiNMwiFte0fwJnwxfcwiyMtpTRY7NVF7q0nfVhcddDPvElWU9yi2wl1-EC5BsbOlVK3w9vxcRECpbgw91F3lRfNdGAq6oqPf2VyrBUJKCe9-Rm7nrbm4zcd8a_-F1xqykfhavPlK6jw8ZF2Dk_YiEgeMisLwfCBWJ3aCVTOE4t6iYElHDu3AtQvdozQVcM9kOqqJFC8EY-JWrKNlkyPGizdyq9AymmXzcXcH-Bw01G5o4uZiXgGvgub5zL8qE-gFxyWRIOQ5QyaWIPU81U5Qo9KV_lLXNROwCB0OCaHUl8iJ7HuMnOqSN_hs8KeiA5n-EvR8AkGl-znD0ylX3Udl5COElB_ZZodKR2VuNn5um3mIpSuR4XP-JmcwDOeYplHtwI7oh43xIOoEQnFiXiGVINbBl49xg-MFOcybBxSyKGRH0s_F0WAIzHBBYz877gfbGNhrVpa_tc-GwZsYITqcolgkonVlGh_03bwg4pMUXCpJtv8WcY82VAVtq0GJjj4LSVV3C-BqTJ4PqGUwVPNUShM7xS1E6p-s_MhLGxMR_cjXJ9-92NK_MqCUAcHSJ9dkoXEsqUnVvimD2wq1XMSBEXOXpHJAlcIw4Lm1NFrGP=w867-h570-no)
  
  You'll see the download progress on the bottom bar of the **Boards Manager** window, when complete it will show **Installed** next to that item on the list.
    
  With the install complete, close the **Boards Manager** window and select the Digispark from the Tools → Boards menu. **Digispark (Default - 16.5mhz)** is the board that should be selected by all new users.
  
  ![](https://lh3.googleusercontent.com/F0ecBkr_4FhgdVQdYCNMn3xAw29gAFKhHNIV5JoPbO5s2oZNaeSCX4iQ8cirlpwed78xCUjDyrStlgWaTJBjH_nXfN9zHY4D0TnEhFHLt8sRJ7sqRZnMGqSaSEOvt3PyebiL7Nrzevhst7hbH4dbGQhSfTrPZFhAc7KwK239kHM_uLrDBE1OGJ_pvxDlGj_3Qo6_YO8gShAM5gEhdzOL6wA7fYC-6FiddklW5qQCT29tm73rrO3aBTsGASdtSY8WMNEkXL4EdZzMCjNxHDeZOiX6mlJvYZAiNQwkBtloXrbjmNpOBo6GCkD-gDEU7fcOVaiUcoVwIki5QRVup4efb8R0T-JvTmZZ_iJIU0PfM1kZyXGW5shvT_Fctb4YBg8CXw7RKV88q_N_fSxbchurkNwARRIirUDVtkoCe7jFlDKSkCAuXPm3lvMmjsvL5WWjuS5keZ6DnEeMdPbbxFQLn3Hodr5QweJmoRQGRZ0fS3E7cv41Otf1C8Dw738f2oCj0OxbSr3NFT7vtP7Ci1Ks5ELSvNNGtsWEV1VWmIxd7AIgJBxmZEfWQI0u2kji2xJ9O1-L8gacxOJ_wrIojrGV2NeVtJCkj99owQFAAl_licQDluoccGzLxN3f6JLABP-tsREoyujegrtJpHCVjCLWHrra9kwVrE10Gu0aBOYLwSe363nJoknZxHrwUGb8qKf_M6mI94xjRvaP5Buj=w683-h587-no)
  
  In order to test the correctness of the settings, we call  the file Keyboard under **File -> Examples -> DigisparkKeyboard**
   
  ![](https://lh3.googleusercontent.com/2TjdKJIvuMa7uSXPUUVrhfS66btEI6NR8I9XEMq_hPCi7pRYlVzhp3b9XPF5YwvsR0u9apcbuOnjc4kk7-3szQza3lQY75SINnDsnE9Gyjwsxqdg_VK3VC4b6LIYveD2dD33S7Z9tmSSk8-kc0ydVjRuXSwVOThYXiKOwXOR6-TdtyspKBQJzY893fopGZOlZcZ86H-wAQLSpmRg5RV0NFwrKRm6EBNeQb5WGWxv7pFLmxVyT7Gugx6FJkcfuNYTqCGiu7v5Bb5BUwzfZSiZgrnzBxA6JcvUamlx4Zmg02tqJzXXnBOxPRgBwCJMgNAgTd11CWYqKh5NdbGES9PGvTFXuyDwpcZvDbatX5mHN4XuROa3ZZAmC0QG_GIDnl0faqa2-sIlpUKf5u_G4mK3hGpwcMnpyFhG4E-OD4lIm5EmMVOJZbJf9IBRKsivV_atry3t4JpfRMTCN7sa1-SwGBverOUgtBpZrpIs84h-p8yWC6Q4vB9cU6xvFc4JoI8VXWNH3_tW62aChh4JI0OwFqq6oXFM0MYtItv5dT6GTJJe5HQNoImfBQs1S951EGMLQvdwgu20WGtNZvEbcuHuM8n7ZGMjPcnQ-0WCdKNoMka89RxGsTpCAHrYK1MBoCgmHMaaj7eG5sHlHFAh_bJnPnWkpiG0pPQA82oWSTs5794UzWuXEIaZW5UkE8vkr8VAp3cbvC8ItjYInpQO=s300-no)
   
  Optionally, under **Tools -> Programmer**, select the **USBtinyISP** option
  
  ![](https://lh3.googleusercontent.com/mWS2YCrw_En94qSDm5jZkERppwahbrEFMOspPFKGP3y-9o2sS5kc3ae-LUrExlXAwA_c0v6ETRDWkDna0eYpZjlJ6E1WJ8Ec709QohjJZzjbwp46IIA9jubgQGKWsCH_rVNp1BdAlSUZDAsQTY4FlvMBzpYARliSFJOtJz50Yg9GMmq0ZrvsiCTBy0nczhbUvE-PXFSWccjhGfjWF43_yq6NDy3pEIm4RhQW_C-1bDeAIgDKaVofZDNWx-C_ebWLEBhSo0cx_MZWyv7qkU0WCZkLrApWveN05TM-L7kwR3KR3OF5xTvrku1nQwrwjytQtLvsLPFUW5SCh6IBPP7A0EjW8lR3WxpWfA0NaE6rE3V7m--9qp6El9C9WVh33Qc0t6sC8s_28_J0orZ5EMjCzz7v3bvWj_YzE-qomXINx8WWxrx-vlZWOz9i0i5CFIpXwqBLzrmMaRgSWQqPjKRIm5RC6IWOjz2KqzuIRQ9Y9mOX5gewxgKuzen_wrlJhYhCc3NxnhZrSQRCmjN9RSg41b9Pv57nlYx2WE4m3sYkOkor9gM2xYUkhqSeUtwb5568v3_mBgua0aK_w_2Esz40vegoujhYqe_XYV4Nn4kfmY95S0nwdgmtyD0XKv3bpslKdzpUIxIUcbCujw8LutfncV0Q6j-gvFiB4R0c_6yWGyn0YT99WvmPNZ3efSJNRjkPEzR_mSXyCxhHXS8F=w300-h209-no)
  
  A first test should show if everything is working properly. It is important to note that the Digispark is not yet plugged into a USB interface. 

  ![](https://lh3.googleusercontent.com/Mx3W28Hi5DxPf0Q8NWbSCz6FODYXOGHafD-pra0GGlFebEJJ8ry19by3VCv-ekiHInVmK-aiMoNRugclFZ-a-3A2jdQcwyMtJjYDLFHAsvKYi8V2eSMqyHpJ-syV4IynN1WaJqf6NBzwUg8MNwjGMXhOLpJPQfIoV7v6PisrrIjF0tW8mxE4TeVTbFoatgLthR-sr5WMTfmzK0gqKqfX_pQ002s23Jo4dgPPahzFm4WojFsnBsahJteTl92rQlKIbJnwd304JpkCip2ibHHhSaTZeFsMWPuQVu18dfcjSZGAoJfHGhaEdaIL_fGqXjmbmlk6kdYudl9Sxn66oISA7XqjpSbdRmVRdPeSCWa5EVkQ7g5n6oW44ox7jSGgDsr3Pwv51TTupo1IS0l37l_Hj8xWHD16-v3EF19a5LQak_GVgPmC5U4wwzwHpNdwkKk16KuHM2xH3Y5Dii2oz9eug-QwUEILyYShVwoiNUp0G2o5oYHIcsCKtQoRrSxjcLeOf8RiIPu_Kqjfrj327PXypp4dbl4eNeVNOLAHPCAst16H1Sade6n3GMlilSbmW2fcg3XD98so8AjVxd1V7eIBm9ROwUaezS_hDHFC0Wbi1pdcAbx6rhgy5cXvNnwlU-IY08H_EVzgW3fziXvBd4vF-3DUnvuhmLAGjv8lIGR6vml_ItPAPF9romJRQS2eJVWPGEg7mEi2XAJ7qgZd=s300-no)
  
  If everything went through without error, you will be prompted to plug in and then transfer the data to the Digispark.
  
  ![](https://lh3.googleusercontent.com/iVUCSK2dUSJyv4Ugc9qsguinDsO1R12QwK63UjkKQV6oiPYxUyy_A5oglYFCM_Qk1WjItuKG6bdGT5OJaQHbKeiVqcXLYuQPWSt9Nxoob4FR8v1FjTaiux1-WS9qq20JJH-mrGhWygAq51D3QaLTfXb0AvRlE2VpXgsOSYVOdKIw4I6MAZcTnuY8pOG4QlDBCRy7MB1BJxX7132tksyVkVsAdIT8Vp-a8QaWWJ59FOb8ZntuTEVcoPLCjVA5LgM6ZjI7pU-AM3aesmT7vfCiW_lnCBMyvl4c3p1OMNSmIeZjD9DtjY6mJsiaORNr9P8FvgXiY9yLIXNKzUdMyFhv5nE7l0oUC7hF_Cu8MMwXHupjf8PsjSrRVhA8MKov4UoKwEOcAwU6EeXRTvCrqSnbjMtGnL0DEo2fr5m9pISqbwxBfIYrA7aNreKvN_21-d4gLEFq_Jb43T5ADLzPQEueOKW3lLwn7Dhlqz8q8cQ6n2PJCqTyR20rIELcpQ7Nwe1qff0Xc_fq0Hkenp6P5coSivQErKrRq9R2-WHoedSTnAFWy43Usrv2Fh2gB57XTFeI4OU1RdUJ4H7XKosjoYz7lBX5dJFsxOS3i4rioTGEVP7fSoBjWifvBny56crZPWJuvFfoNevqYnLk2fhJBhod6eYfbUG37GexcLvaIWkWTu63Oe-04wpJoRpFKNHoA0gC_ZsnxLLfg020wE4U=w250-h300-no)
 

