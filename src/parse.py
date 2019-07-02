import os
import subprocess

print('| Paper link                       	| ' + os.environ['COMPILER'] + ' |')
print('|----------------------------------	|' + '-----|')

with open('log.txt') as f:
   intitialized = False;
   process = False;
   for line in f:
      if 'Test project' in line:
         intitialized = True;
         process = True;
         continue;
      if intitialized:
         process = not process;
      if process & intitialized:
         tokens = line.split();
         if tokens[1] == 'Test':
            path = 'Public/ConformanceTest/$TRAVIS_BRANCH/$COMPILER/' + tokens[3] + '.png';
            current = 'Passed.png ';
            if tokens[5] == 'Passed':
               current = 'Passed.png ';
            else:
               current = 'Failed.png ';
            command = '~/dropbox_uploader.sh upload ../../images/' + current + path;
            output = subprocess.check_output(command, shell=True);
            command = '~/dropbox_uploader.sh share ' + path
            output = subprocess.check_output(command, shell=True);
            image_link = output.split()[-1].replace('?dl=0', '?raw=1')
#           print('link: ' + link)
            paper = image_link.split('.')[4];
#           print('paper: ' + paper)
            paper_link = '| [' + paper + '](https://wg21.link/' + paper + ') 	|';
            if paper == 'n0000':
               paper_link = '|                                  	|';
            print(paper_link + ' ![](' + image_link + ') |')

      if ' tests failed out of ' in line:
          break
