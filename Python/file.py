fileptr=open("myfile.txt","a")

#if fileptr:
 #   print("open sucessfully")
fileptr.write('''python is good ''')  
fileptr.close()