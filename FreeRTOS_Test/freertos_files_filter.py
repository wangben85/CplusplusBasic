# encoding: utf-8
import os
import sys

source_cscope_files_path = "C:\\other_Code_Repo\\CplusplusBasic\\FreeRTOS_Test\\cscope_source_test.files"
filter_cscope_files_path = "C:\\other_Code_Repo\\CplusplusBasic\\FreeRTOS_Test\\cscope.files"
cscope_files_list = []


# the unexpected files to be removed from the list
del_array = [
  "mocks",
  "gmock",
  "fake",
  "fsl_",
  "tests",
  "UnitTests",
]

# check items in array if exist in line
def isInArray (array, line):
  for item in array:
    if item in line:
      return True
  return False

def files_list_append(obj):
    """
    endswith() define the suffix files to be find
    """
    if obj.endswith(".cpp") or \
       obj.endswith(".c") or \
       obj.endswith(".h") or\
       obj.endswith(".hpp"):
       print(obj)
       cscope_files_list.append(obj + '\n')


def search_dir(dir_path):
    dir_files = os.listdir(dir_path)  # list all the files and folders of current folder
    for file in dir_files:
        file_path = os.path.join(dir_path, file)  # absolute path of the file
        if os.path.isfile(file_path):  # if it is the file
            files_list_append(file_path)
        elif os.path.isdir(file_path): # if it is the folder
            search_dir(file_path)  # call itself

def file_write(content):
    with open(source_cscope_files_path, 'w') as fp:
        fp.write(content)
        #fp.flush()
        #fp.close()

if __name__ == '__main__':
    dir_path = sys.path[0]    # current sys path
    search_dir(dir_path)      # search dir
    content = ''.join(cscope_files_list)   # convert list to str for file write
    file_write(content)
    fname = source_cscope_files_path
    ffilter = filter_cscope_files_path
    with open(fname, 'r') as f:
       with open(ffilter, 'w') as g:
          for line in f.readlines():  # read each line from the input file
            if not isInArray(del_array, line):
               g.write(line)
    os.system("cscope -Rb")
    os.system("ctags -R *")
