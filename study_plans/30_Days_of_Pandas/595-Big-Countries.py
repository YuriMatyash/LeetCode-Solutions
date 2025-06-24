import pandas as pd

def big_countries(world: pd.DataFrame) -> pd.DataFrame:
    columns = ['name', 'population', 'area']
    condition = (world['area'] >= 3000000) | (world['population'] >= 25000000)
    df = world.loc[condition, columns]
    return df
    

# First version
'''
def big_countries(world: pd.DataFrame) -> pd.DataFrame:
    columns = ['name', 'population', 'area']
    df_area = world.loc[world['area'] >= 3000000, columns]
    df_population = world.loc[world['population'] >= 25000000, columns]
    df = pd.concat([df_area, df_population], axis=0).drop_duplicates()
    return df
'''