#ifndef PARSER_H
#define PARSER_H
#include "network.h"

#ifdef __cplusplus
extern "C" {
#endif
network parse_network_cfg(char *filename);
network parse_network_cfg_custom(char *filename, int batch, int time_steps);
void save_network(network net, char *filename);
void save_weights(network net, char *filename);
void save_weights_upto(network net, char *filename, int cutoff, int save_ema);
void save_weights_double(network net, char *filename);
void load_weights(network *net, char *filename);
void load_weights_upto(network *net, char *filename, int cutoff);
void load_weights_debug(network *net, char *filename, char*nth_layer, char*pertentage);
void save_weights_upto_debug(network net, char *filename, int cutoff, int layer, float percent);
void save_weights_upto_debug(network net, char *filename, int cutoff, int layer, float percent);
int* load_convolutional_weights_prune(layer l, FILE *fp, int nth_layer, int filters);
void load_convolutional_weights_prune_nextlayer(layer l, FILE *fp, int* channel_index);
#ifdef __cplusplus
}
#endif
#endif
