# नमों सिद्धम  

class User():
    def __init__(self, name, email, mobile,gender, current_location):
        self.name = name
        self.email = email
        self.mobile = mobile
        self.gender = gender
        self.current_location = current_location
class Driver:
    def __init__(self, name, email, mobile, vehicle_no, vehicle_type, current_location, isDriving):
        self.name = name
        self.email = email
        self.mobile = mobile
        
        self.vehicle_no = vehicle_no
        self.vehicle_type = vehicle_type
        self.current_location = current_location
        self.isDriving = isDriving
        self.ridesHappened = []
        
class UserHandler:
    def __init__(self):
        self.users = []
        self.drivers = []
        
    # user methods
    def add_user(self, user):
        self.users.append(user)
    
    def update_user_details(self, user, new_mobile_no):
        for i in range(len(self.users)):
            if user  == self.users[i]:
                self.users[i].mobile = new_mobile_no
    
    def update_user_location(self, user, updated_location):
        for i in range(len(self.users)):
            if user == self.users[i]:
                self.users[i].current_location = updated_location

    # driver methods 
    def add_driver(self, driver):
        isDriving = 0
        self.drivers.append((driver, 0))
    
    def update_driver_location(self, driver, updated_location):
        for i in range(len(self.drivers)):
            if driver == self.drivers[i][0]:
                self.drivers[i][0].current_location = updated_location
    
    def change_driver_status(self, driver, updatedStatus):
        # updatedstatus -> (isDriving) this is a boolean value
        for i in range(len(self.drivers)):
            if driver == self.drivers[i]:
                self.drivers[i][1] = updatedStatus
                
    
class RideHandler:
    def __init__(self):
        self.rides = []
        
    def findRide(self, source, drivers):
        print(drivers[0][0], "drivers")
        # drivers->[(driver, boolean)]
        for i in range(len(drivers)):
            driver = drivers[i]
            current_location_driver = driver[0].current_location
            isDriving = driver[1]
            distance =  abs(source[0] - current_location_driver[0]) + abs(source[1] - current_location_driver[1]) # this is manhattan distance
            if distance<=5 and not isDriving:
                self.rides.append(driver)
        return self.rides
    
    def calculateBill(self,source, destination):
        bill = abs(destination - source)*100
        return bill
    
    def chooseRide(self, rides,user,driver, source, destination):
        if driver in rides:
            print("Your ride has been succesfully booked")
            driver.ridesHappened.append((self.calculateBill(source, destination)))
            return 1
        else:
            print("This driver doesn't exist")
            return None
        
    def calculate_total_earnings(self, driver):
        total_earning = sum(driver.ridesHappened)
                
                
            
   
    
user1 = User("abhay", "2samyakj", "97194", "M", (4, 5))
print(user1)
user_handler = UserHandler()
user_handler.add_user(user1)
print(user_handler.users[0].name)
user_handler.update_user_location(user1, (0,0))
print(user_handler.users[0].current_location)

driver1 = Driver("Driver1", "2samya", "9874514", "DL1050", "Sedan", (0,1), 0)
driver2 = Driver("Driver2", "2samyak", "98745123454", "DL1051450", "GO", (0,2), 0)
user_handler.add_driver(driver1)
user_handler.add_driver(driver2)
print(user_handler.drivers[0][0].name)
print(user_handler.drivers[0][1])
print(user_handler.drivers[1][0].name)
print(user_handler.drivers[1][1])

ride_handler = RideHandler()
print(user1.current_location)
rides = (ride_handler.findRide(user1.current_location, user_handler.drivers))
print(len(rides))