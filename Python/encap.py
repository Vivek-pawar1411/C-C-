class novel:
    def __init__ (self,title,quant,writer,price):
          self.title=title
          self.quant=quant
          self.writer=writer
          self.price=price  
    def __repr__(self):
      return f"novel:{self.title}, quant: {self.quant}, writer:{self.writer}, price{self.price}"
  
book=novel("Biography",25,"Writer 5",225)
print(book)