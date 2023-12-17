class Employee:
    company="Cdac"
    def __init__(self,empid,sname,designation,salary,project_id,skill):
       self.empid=empid
       self.name=name
       self.designation=designation
       self.salary=salary
       self.project_id=project_id
       self.skill=skill
    def display_project(self):
        print(self.project_id)
    def display_identity(self):
        print(self.empid,self.name,self.salary)
    def check_relevent_skill(self,skill):
        if skill in self.skill:
            return True
        else:
            return False
    @classmethod
    def display_company(cls):
        print("Company= ",cls.company)
        
employee_list=[]
for i in range(3):
    empid=input("Enter empid")
    name=input("Enter name")
    designation=input("Enter designation")
    salary=input("Enter salary")
    project_id_str=input("Enter the project with space")
    project_id_list=project_id_str.split()
    project_id_set=set(project_id_list)
    skill_str=input("Enter the skills")
    skill_list=skill_str.split()

    # Employee(empid,name,designation,salary,project_id_set,skill_list)
    employee_list.append(Employee(empid,name,designation,salary,project_id_set,skill_list))

# print(employee_list[].display_identity())
for i in employee_list:
    i.display_identity()    