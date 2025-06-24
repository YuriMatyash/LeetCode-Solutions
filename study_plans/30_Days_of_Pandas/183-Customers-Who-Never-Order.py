import pandas as pd

def find_customers(customers: pd.DataFrame, orders: pd.DataFrame) -> pd.DataFrame:
    '''
    SELECT name AS customers
    FROM customers
    LEFT JOIN orders 
    ON customers.id = orders.customerId
    WHERE orders.customerId IS NULL
    '''
    result = pd.merge(customers, orders, left_on='id', right_on='customerId', how='left')
    result = result[result['customerId'].isna()][['name']]
    result = result.rename(columns={'name': 'customers'})
    return result