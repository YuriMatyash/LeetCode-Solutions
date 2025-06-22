import pandas as pd

def findHeavyAnimals(animals: pd.DataFrame) -> pd.DataFrame:
    # out of pd, take all rows where value at col 'weight' > 100
    # sort rows by col 'weight', decending order
    # select only cols ['name']
    result = animals[animals['weight'] > 100].sort_values(by='weight', ascending=False)[['name']]
    return result