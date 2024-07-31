# नमः सिद्धम 
class Traveler:
    def __init__(self, name):
        self.name = name
        self.mapRecieve = {}

class Trip:
    def __init__(self, id):
        self.id = id
        self.travelers = []
        
class Expense:
    def __init__(self, trip_id, spend_by, own_to, amount):
        self.trip_id = trip_id
        self.spend_by = spend_by
        self.own_to = own_to
        self.amount = amount
        
class ExpenseHandler:
    def __init__(self):
        self.all_expenses = []
        
    def calc_spend_by_traveler(self, traveler_name, trip_id):
        spend_by_total = 0.0
        own_to_total = 0.0
        
        for expense in self.all_expenses:
            if expense.trip_id == trip_id:
                if expense.spend_by == traveler_name:
                    spend_by_total += expense.amount
                    if expense.own_to in traveler1.mapRecieve:
                        traveler1.mapRecieve[expense.own_to] += expense.amount
                    else:
                        traveler1.mapRecieve[expense.own_to] = expense.amount
                if expense.own_to == traveler_name:
                    own_to_total += expense.amount

        return spend_by_total, own_to_total
        
        

# Initialize Travelers
traveler1 = Traveler("Alice")
traveler2 = Traveler("Bob")
traveler3 = Traveler("Charlie")

# Initialize a Trip
trip1 = Trip(1)
trip1.travelers.extend([traveler1, traveler2, traveler3])

# Initialize Expenses
expense1 = Expense(trip_id=1, spend_by=traveler1.name, own_to=traveler2.name, amount=50.0)
expense2 = Expense(trip_id=1, spend_by=traveler2.name, own_to=traveler3.name, amount=30.0)
expense3 = Expense(trip_id=1, spend_by=traveler3.name, own_to=traveler1.name, amount=20.0)
expense4 = Expense(trip_id=1, spend_by=traveler1.name, own_to=traveler3.name, amount=40.0)

# Initialize ExpenseHandler and add expenses
expense_handler = ExpenseHandler()
expense_handler.all_expenses.extend([expense1, expense2, expense3, expense4])

for person in trip1.travelers:
    expense_handler.calc_spend_by_traveler(person,1)
     

# Display expenses
for expense in expense_handler.all_expenses:
    print(f"Trip ID: {expense.trip_id}, Spend By: {expense.spend_by}, Own To: {expense.own_to}, Amount: {expense.amount}")