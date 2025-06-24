import pandas as pd

def find_products(products: pd.DataFrame) -> pd.DataFrame:
    columns = ['product_id']
    conditions = (products['low_fats'] == 'Y') & (products['recyclable'] == 'Y')
    df = products.loc[conditions, columns]
    return df