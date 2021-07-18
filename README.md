# darknet_prune_yolo
this is the src for a pruning tool to prune darknet weights
This project is based on https://github.com/AlexeyAB and developend to prune Darknet weights file as your will.

Steps to use it

1 download the the original Darknet for windows from https://github.com/AlexeyAB;  then replace its src with my src; then build it.
2 in the cmd line window type in: darknet.exe xx.cfg xx.weights m n xx.cfg is the cfg file for the model you want to prune xx.weights is the weights file for the model you want to prune m is the mth layer you want to prune n is the percentage of the filters you want to prune off.

for example " darknet.exe yolov3.cfg yolov3.weights 0 0.5 " which means you will cut off 50% of the filters in the 0th Conv layer, the number of original filters in 0th layer is 32, now the you will get only 16 more important filters.

The pruning algorithm is simple, referring to this "Pruning Filters for Efficient ConvNets"
 NOTE: be careful to use this, because there are many shortcut laryers in Yolov3. in this case, the demission of two layers probably change, consequently, they can not add again.
 
