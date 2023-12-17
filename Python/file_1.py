fileptr=open("myfile_1.txt","a")

#if fileptr:
 #   print("open sucessfully")
fileptr.write('''hello world ''')  
fileptr.close()