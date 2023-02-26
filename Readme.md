# FACEDETECTION & IMAGE VERIFICATION WITH OPENCV & C++

## STACKS
Visual Studio
C++

## ABOUT THIS REPOSITORY

This is a project that makes use of open cv and C++ to carry out the following on Windows OS
1. Detect the number of faces using the webcam 
2. Comparing two Images and producing the absolute difference between both images (_If the images are the same, then the difference produced will be pure black_)
3. Read Images from the directory

## HOW TO GET STARTED WITH THIS REPOSITORY
1. Clone this repository
2. Download and extract opencv to a convenient location on your Windows PC. The link to download is [here](https://github.com/opencv/opencv/releases/download/4.5.5/opencv-4.5.5-vc14_vc15.exe)
		After the extraction, a folder called _opencv_ will be in the designated location
3. Get the address of the bin folder (of the opencv) and add it to the Path of the Environment Variables and System Variables
4. Then viewing the project in Solution mode in Visual Studio, right click and navigate to the properties
		For the Include Directory, Get the address to the _include_ folder in the opencv and add it there
		For the Library Drectory, Get the address to the _lib_ folder in the opencv and add it
		Go to the Linker - Input _ and edit the additional dependencies. You can enter _opencv_world455d.lib_ (or whichever is the version of opencv that you downloaded)
		Go to Debugging - Environmental Variable - and include the address of the bin folder in your local opencv

You are good to go :+1:


Link to download the haarcascade_frontalface_default.xml for reading images [here](https://osdn.net/frs/g_redir.php?m=jaist&f=magicvisionport%2Fmvp%2Fcascades%2Fhaarcascade_frontalface_default.xml)