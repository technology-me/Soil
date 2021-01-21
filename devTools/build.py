import hamal
import os

path = os.path.abspath(os.path.dirname(os.getcwd())) + '/test.soil'
hamal.write(path,'name','test')
print(hamal.read(path,all))