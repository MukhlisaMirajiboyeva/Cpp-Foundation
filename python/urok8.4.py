with open("data.txt", "w+") as f:
      f.write("Python")
      
      f.seek(0)
      content = f.read()
      print(content)