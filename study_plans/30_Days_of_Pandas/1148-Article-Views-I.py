import pandas as pd

def article_views(views: pd.DataFrame) -> pd.DataFrame:
    '''
    SELECT autor_id AS id
    FROM views
    WHERE autor_id = viewer_id
    ORDER BY id ASC
    '''
    column = ['author_id']
    condition = views['author_id'] == views['viewer_id']
    result = views.loc[condition, column]
    result = result.rename(columns={'author_id':'id'})
    result = result.drop_duplicates()
    result = result.sort_values(by='id', ascending=True)
    return result