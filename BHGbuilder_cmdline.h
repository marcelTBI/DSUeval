/** @file BHGbuilder_cmdline.h
 *  @brief The header file for the command line option parser
 *  generated by GNU Gengetopt version 2.22.6
 *  http://www.gnu.org/software/gengetopt.
 *  DO NOT modify this file, since it can be overwritten
 *  @author GNU Gengetopt by Lorenzo Bettini */

#ifndef BHGBUILDER_CMDLINE_H
#define BHGBUILDER_CMDLINE_H

/* If we use autoconf.  */
#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <stdio.h> /* for FILE */

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#ifndef CMDLINE_PARSER_PACKAGE
/** @brief the program name (used for printing errors) */
#define CMDLINE_PARSER_PACKAGE "BHGbuilder"
#endif

#ifndef CMDLINE_PARSER_PACKAGE_NAME
/** @brief the complete program name (used for help and version) */
#define CMDLINE_PARSER_PACKAGE_NAME "BHGbuilder"
#endif

#ifndef CMDLINE_PARSER_VERSION
/** @brief the program version */
#define CMDLINE_PARSER_VERSION "1.0"
#endif

/** @brief Where the command line options are stored */
struct gengetopt_args_info
{
  const char *help_help; /**< @brief Print help and exit help description.  */
  const char *detailed_help_help; /**< @brief Print help, including all details and hidden options, and exit help description.  */
  const char *full_help_help; /**< @brief Print help, including hidden options, and exit help description.  */
  const char *version_help; /**< @brief Print version and exit help description.  */
  int debug_flag;	/**< @brief Print debug (default=off).  */
  const char *debug_help; /**< @brief Print debug help description.  */
  int depth_arg;	/**< @brief Depth of findpath search (higher value increases running time) (default='10').  */
  char * depth_orig;	/**< @brief Depth of findpath search (higher value increases running time) original value given at command line.  */
  const char *depth_help; /**< @brief Depth of findpath search (higher value increases running time) help description.  */
  int noLP_flag;	/**< @brief Process structures without lonely pairs (helices of length 1). (default=off).  */
  const char *noLP_help; /**< @brief Process structures without lonely pairs (helices of length 1). help description.  */
  int shift_flag;	/**< @brief Assume also shift moves (in addition to insertion and deletions). (default=off).  */
  const char *shift_help; /**< @brief Assume also shift moves (in addition to insertion and deletions). help description.  */
  int time_max_arg;	/**< @brief Quit after computing for specified time (in seconds) (default='0').  */
  char * time_max_orig;	/**< @brief Quit after computing for specified time (in seconds) original value given at command line.  */
  const char *time_max_help; /**< @brief Quit after computing for specified time (in seconds) help description.  */
  int just_read_flag;	/**< @brief Do not computate, just read a .dsu file and do postprocessing (default=off).  */
  const char *just_read_help; /**< @brief Do not computate, just read a .dsu file and do postprocessing help description.  */
  int number_lm_arg;	/**< @brief Maximum number of LM (default=everything in input file) (default='0').  */
  char * number_lm_orig;	/**< @brief Maximum number of LM (default=everything in input file) original value given at command line.  */
  const char *number_lm_help; /**< @brief Maximum number of LM (default=everything in input file) help description.  */
  char * paramFile_arg;	/**< @brief Read energy parameters from paramfile, instead of using the default parameter set..  */
  char * paramFile_orig;	/**< @brief Read energy parameters from paramfile, instead of using the default parameter set. original value given at command line.  */
  const char *paramFile_help; /**< @brief Read energy parameters from paramfile, instead of using the default parameter set. help description.  */
  int dangles_arg;	/**< @brief How to treat \"dangling end\" energies for bases adjacent to helices in free ends and multi-loops
 (default='2').  */
  char * dangles_orig;	/**< @brief How to treat \"dangling end\" energies for bases adjacent to helices in free ends and multi-loops
 original value given at command line.  */
  const char *dangles_help; /**< @brief How to treat \"dangling end\" energies for bases adjacent to helices in free ends and multi-loops
 help description.  */
  int hd_threshold_arg;	/**< @brief Do not try to process pairs with Hamming distance more than this. (0 means no threshold) (default='0').  */
  char * hd_threshold_orig;	/**< @brief Do not try to process pairs with Hamming distance more than this. (0 means no threshold) original value given at command line.  */
  const char *hd_threshold_help; /**< @brief Do not try to process pairs with Hamming distance more than this. (0 means no threshold) help description.  */
  int num_threshold_arg;	/**< @brief Compute only first num-threshold pairs - finish HD range (0 means no threshold) (default='0').  */
  char * num_threshold_orig;	/**< @brief Compute only first num-threshold pairs - finish HD range (0 means no threshold) original value given at command line.  */
  const char *num_threshold_help; /**< @brief Compute only first num-threshold pairs - finish HD range (0 means no threshold) help description.  */
  int outer_flag;	/**< @brief Add to UBlist also outer structures - we will not have only direct saddles then (use on your own risk!) (default=off).  */
  const char *outer_help; /**< @brief Add to UBlist also outer structures - we will not have only direct saddles then (use on your own risk!) help description.  */
  int components_flag;	/**< @brief Also link components with DSU-algorithm (default=on).  */
  const char *components_help; /**< @brief Also link components with DSU-algorithm help description.  */
  int noSaddle_flag;	/**< @brief Do not flood-link sadddles (saves some computation time, usually saddles are not connected anyway) (default=off).  */
  const char *noSaddle_help; /**< @brief Do not flood-link sadddles (saves some computation time, usually saddles are not connected anyway) help description.  */
  int just_ub_flag;	/**< @brief Do not find connections - just do first part of program (default=off).  */
  const char *just_ub_help; /**< @brief Do not find connections - just do first part of program help description.  */
  int no_conn_flag;	/**< @brief Do not connect what is already connected (saves computation time greatly, decreases accuracy greatly) (default=off).  */
  const char *no_conn_help; /**< @brief Do not connect what is already connected (saves computation time greatly, decreases accuracy greatly) help description.  */
  int floodMax_arg;	/**< @brief Flood cap on number - how many structures to flood (flooding is disabled by default) (default='0').  */
  char * floodMax_orig;	/**< @brief Flood cap on number - how many structures to flood (flooding is disabled by default) original value given at command line.  */
  const char *floodMax_help; /**< @brief Flood cap on number - how many structures to flood (flooding is disabled by default) help description.  */
  int floodHeight_arg;	/**< @brief Flood cap on height - what is the maximal energy height we will flood in 10cal/mol (0 = unlimited) (default='0').  */
  char * floodHeight_orig;	/**< @brief Flood cap on height - what is the maximal energy height we will flood in 10cal/mol (0 = unlimited) original value given at command line.  */
  const char *floodHeight_help; /**< @brief Flood cap on height - what is the maximal energy height we will flood in 10cal/mol (0 = unlimited) help description.  */
  int dot_flag;	/**< @brief Use dot instead of neato for graph plotting (default=on).  */
  const char *dot_help; /**< @brief Use dot instead of neato for graph plotting help description.  */
  int dot_energies_flag;	/**< @brief Print energies along with the LM number in graph (default=off).  */
  const char *dot_energies_help; /**< @brief Print energies along with the LM number in graph help description.  */
  int tree_visualise_flag;	/**< @brief Use tree visualisation (landmark) (default=off).  */
  const char *tree_visualise_help; /**< @brief Use tree visualisation (landmark) help description.  */
  int print_full_flag;	/**< @brief Print matrices for all found LM. (default is print only for input, this influences ALL matrices) (switches on --print-energy flag) (default=off).  */
  const char *print_full_help; /**< @brief Print matrices for all found LM. (default is print only for input, this influences ALL matrices) (switches on --print-energy flag) help description.  */
  char ** get_path_arg;	/**< @brief Get path between 2 local minima and print it into file pathL1_L2.path.  */
  char ** get_path_orig;	/**< @brief Get path between 2 local minima and print it into file pathL1_L2.path original value given at command line.  */
  unsigned int get_path_min; /**< @brief Get path between 2 local minima and print it into file pathL1_L2.path's minimum occurreces */
  unsigned int get_path_max; /**< @brief Get path between 2 local minima and print it into file pathL1_L2.path's maximum occurreces */
  const char *get_path_help; /**< @brief Get path between 2 local minima and print it into file pathL1_L2.path help description.  */
  char * dot_file_arg;	/**< @brief Filename for dot graph file (default='DSUeval.dot').  */
  char * dot_file_orig;	/**< @brief Filename for dot graph file original value given at command line.  */
  const char *dot_file_help; /**< @brief Filename for dot graph file help description.  */
  char * graph_file_arg;	/**< @brief Filename for landmap/landmark graph image (does not print by default).  */
  char * graph_file_orig;	/**< @brief Filename for landmap/landmark graph image (does not print by default) original value given at command line.  */
  const char *graph_file_help; /**< @brief Filename for landmap/landmark graph image (does not print by default) help description.  */
  char * barr_file_arg;	/**< @brief Filename for barrier-like output - does not contain all information (does not print by default).  */
  char * barr_file_orig;	/**< @brief Filename for barrier-like output - does not contain all information (does not print by default) original value given at command line.  */
  const char *barr_file_help; /**< @brief Filename for barrier-like output - does not contain all information (does not print by default) help description.  */
  char * energy_file_arg;	/**< @brief Fileneme for energy barrier matrix (does not print by default).  */
  char * energy_file_orig;	/**< @brief Fileneme for energy barrier matrix (does not print by default) original value given at command line.  */
  const char *energy_file_help; /**< @brief Fileneme for energy barrier matrix (does not print by default) help description.  */
  char * dist_file_arg;	/**< @brief Filename for distance matrix (does not print by default).  */
  char * dist_file_orig;	/**< @brief Filename for distance matrix (does not print by default) original value given at command line.  */
  const char *dist_file_help; /**< @brief Filename for distance matrix (does not print by default) help description.  */
  char * gdist_file_arg;	/**< @brief Filename for graph distance matrix (does not print by default).  */
  char * gdist_file_orig;	/**< @brief Filename for graph distance matrix (does not print by default) original value given at command line.  */
  const char *gdist_file_help; /**< @brief Filename for graph distance matrix (does not print by default) help description.  */
  char * rates_file_arg;	/**< @brief Filename for rates for treekin (does not print by default, appends mode_rates on end of filename).  */
  char * rates_file_orig;	/**< @brief Filename for rates for treekin (does not print by default, appends mode_rates on end of filename) original value given at command line.  */
  const char *rates_file_help; /**< @brief Filename for rates for treekin (does not print by default, appends mode_rates on end of filename) help description.  */
  int print_all_flag;	/**< @brief generate all output (switches on all text '*-file' to default) (default=off).  */
  const char *print_all_help; /**< @brief generate all output (switches on all text '*-file' to default) help description.  */
  float rates_temp_arg;	/**< @brief Temperature for rates (in Celsius) (default='37.0').  */
  char * rates_temp_orig;	/**< @brief Temperature for rates (in Celsius) original value given at command line.  */
  const char *rates_temp_help; /**< @brief Temperature for rates (in Celsius) help description.  */
  char ** rates_mode_arg;	/**< @brief Mode for rates generation (V - vertex contraction, taking into acount only max_height; S - vertex contraction, taking into acount path; E - edge contraction (minimal barrier); M - edge contraction (maximal barrier); F - full matrix for all LMs) (default='F').  */
  char ** rates_mode_orig;	/**< @brief Mode for rates generation (V - vertex contraction, taking into acount only max_height; S - vertex contraction, taking into acount path; E - edge contraction (minimal barrier); M - edge contraction (maximal barrier); F - full matrix for all LMs) original value given at command line.  */
  unsigned int rates_mode_min; /**< @brief Mode for rates generation (V - vertex contraction, taking into acount only max_height; S - vertex contraction, taking into acount path; E - edge contraction (minimal barrier); M - edge contraction (maximal barrier); F - full matrix for all LMs)'s minimum occurreces */
  unsigned int rates_mode_max; /**< @brief Mode for rates generation (V - vertex contraction, taking into acount only max_height; S - vertex contraction, taking into acount path; E - edge contraction (minimal barrier); M - edge contraction (maximal barrier); F - full matrix for all LMs)'s maximum occurreces */
  const char *rates_mode_help; /**< @brief Mode for rates generation (V - vertex contraction, taking into acount only max_height; S - vertex contraction, taking into acount path; E - edge contraction (minimal barrier); M - edge contraction (maximal barrier); F - full matrix for all LMs) help description.  */
  char ** visualise_arg;	/**< @brief Visualise paths between 2 structures, can be specified multiple times, output goes to file pathL1_L2.eps.  */
  char ** visualise_orig;	/**< @brief Visualise paths between 2 structures, can be specified multiple times, output goes to file pathL1_L2.eps original value given at command line.  */
  unsigned int visualise_min; /**< @brief Visualise paths between 2 structures, can be specified multiple times, output goes to file pathL1_L2.eps's minimum occurreces */
  unsigned int visualise_max; /**< @brief Visualise paths between 2 structures, can be specified multiple times, output goes to file pathL1_L2.eps's maximum occurreces */
  const char *visualise_help; /**< @brief Visualise paths between 2 structures, can be specified multiple times, output goes to file pathL1_L2.eps help description.  */
  int vis_dist_flag;	/**< @brief Set distance as a bounding condition for visualisation (instead of energy) (default=off).  */
  const char *vis_dist_help; /**< @brief Set distance as a bounding condition for visualisation (instead of energy) help description.  */
  int vis_length_arg;	/**< @brief Set maximal length of paths in visualisation (increases computation time greatly) use only with vis-dist off (default='15').  */
  char * vis_length_orig;	/**< @brief Set maximal length of paths in visualisation (increases computation time greatly) use only with vis-dist off original value given at command line.  */
  const char *vis_length_help; /**< @brief Set maximal length of paths in visualisation (increases computation time greatly) use only with vis-dist off help description.  */
  char * energy_heights_arg;	/**< @brief output energies of saddles between every pair of structures (filename).  */
  char * energy_heights_orig;	/**< @brief output energies of saddles between every pair of structures (filename) original value given at command line.  */
  const char *energy_heights_help; /**< @brief output energies of saddles between every pair of structures (filename) help description.  */
  char * energy_rank_arg;	/**< @brief output sorted energies of saddles between minima (filename).  */
  char * energy_rank_orig;	/**< @brief output sorted energies of saddles between minima (filename) original value given at command line.  */
  const char *energy_rank_help; /**< @brief output sorted energies of saddles between minima (filename) help description.  */
  char * energy_barrier_arg;	/**< @brief output sorted barrier heights between minima (filename).  */
  char * energy_barrier_orig;	/**< @brief output sorted barrier heights between minima (filename) original value given at command line.  */
  const char *energy_barrier_help; /**< @brief output sorted barrier heights between minima (filename) help description.  */
  int cluster_Kmax_arg;	/**< @brief Size of maximal cluster (clustering is off by default) (default='0').  */
  char * cluster_Kmax_orig;	/**< @brief Size of maximal cluster (clustering is off by default) original value given at command line.  */
  const char *cluster_Kmax_help; /**< @brief Size of maximal cluster (clustering is off by default) help description.  */
  float cluster_repre_arg;	/**< @brief Portion of LMs taken as representatives from each cluster (default='0.05').  */
  char * cluster_repre_orig;	/**< @brief Portion of LMs taken as representatives from each cluster original value given at command line.  */
  const char *cluster_repre_help; /**< @brief Portion of LMs taken as representatives from each cluster help description.  */
  int cluster_fsaddle_flag;	/**< @brief Insert to representatives those LM, which have highest saddle point connecting them (instead of LM, which have highest barrier height between themselves) (default=off).  */
  const char *cluster_fsaddle_help; /**< @brief Insert to representatives those LM, which have highest saddle point connecting them (instead of LM, which have highest barrier height between themselves) help description.  */
  
  unsigned int help_given ;	/**< @brief Whether help was given.  */
  unsigned int detailed_help_given ;	/**< @brief Whether detailed-help was given.  */
  unsigned int full_help_given ;	/**< @brief Whether full-help was given.  */
  unsigned int version_given ;	/**< @brief Whether version was given.  */
  unsigned int debug_given ;	/**< @brief Whether debug was given.  */
  unsigned int depth_given ;	/**< @brief Whether depth was given.  */
  unsigned int noLP_given ;	/**< @brief Whether noLP was given.  */
  unsigned int shift_given ;	/**< @brief Whether shift was given.  */
  unsigned int time_max_given ;	/**< @brief Whether time-max was given.  */
  unsigned int just_read_given ;	/**< @brief Whether just-read was given.  */
  unsigned int number_lm_given ;	/**< @brief Whether number-lm was given.  */
  unsigned int paramFile_given ;	/**< @brief Whether paramFile was given.  */
  unsigned int dangles_given ;	/**< @brief Whether dangles was given.  */
  unsigned int hd_threshold_given ;	/**< @brief Whether hd-threshold was given.  */
  unsigned int num_threshold_given ;	/**< @brief Whether num-threshold was given.  */
  unsigned int outer_given ;	/**< @brief Whether outer was given.  */
  unsigned int components_given ;	/**< @brief Whether components was given.  */
  unsigned int noSaddle_given ;	/**< @brief Whether noSaddle was given.  */
  unsigned int just_ub_given ;	/**< @brief Whether just-ub was given.  */
  unsigned int no_conn_given ;	/**< @brief Whether no-conn was given.  */
  unsigned int floodMax_given ;	/**< @brief Whether floodMax was given.  */
  unsigned int floodHeight_given ;	/**< @brief Whether floodHeight was given.  */
  unsigned int dot_given ;	/**< @brief Whether dot was given.  */
  unsigned int dot_energies_given ;	/**< @brief Whether dot-energies was given.  */
  unsigned int tree_visualise_given ;	/**< @brief Whether tree-visualise was given.  */
  unsigned int print_full_given ;	/**< @brief Whether print-full was given.  */
  unsigned int get_path_given ;	/**< @brief Whether get-path was given.  */
  unsigned int dot_file_given ;	/**< @brief Whether dot-file was given.  */
  unsigned int graph_file_given ;	/**< @brief Whether graph-file was given.  */
  unsigned int barr_file_given ;	/**< @brief Whether barr-file was given.  */
  unsigned int energy_file_given ;	/**< @brief Whether energy-file was given.  */
  unsigned int dist_file_given ;	/**< @brief Whether dist-file was given.  */
  unsigned int gdist_file_given ;	/**< @brief Whether gdist-file was given.  */
  unsigned int rates_file_given ;	/**< @brief Whether rates-file was given.  */
  unsigned int print_all_given ;	/**< @brief Whether print-all was given.  */
  unsigned int rates_temp_given ;	/**< @brief Whether rates-temp was given.  */
  unsigned int rates_mode_given ;	/**< @brief Whether rates-mode was given.  */
  unsigned int visualise_given ;	/**< @brief Whether visualise was given.  */
  unsigned int vis_dist_given ;	/**< @brief Whether vis-dist was given.  */
  unsigned int vis_length_given ;	/**< @brief Whether vis-length was given.  */
  unsigned int energy_heights_given ;	/**< @brief Whether energy-heights was given.  */
  unsigned int energy_rank_given ;	/**< @brief Whether energy-rank was given.  */
  unsigned int energy_barrier_given ;	/**< @brief Whether energy-barrier was given.  */
  unsigned int cluster_Kmax_given ;	/**< @brief Whether cluster-Kmax was given.  */
  unsigned int cluster_repre_given ;	/**< @brief Whether cluster-repre was given.  */
  unsigned int cluster_fsaddle_given ;	/**< @brief Whether cluster-fsaddle was given.  */

  char **inputs ; /**< @brief unamed options (options without names) */
  unsigned inputs_num ; /**< @brief unamed options number */
} ;

/** @brief The additional parameters to pass to parser functions */
struct cmdline_parser_params
{
  int override; /**< @brief whether to override possibly already present options (default 0) */
  int initialize; /**< @brief whether to initialize the option structure gengetopt_args_info (default 1) */
  int check_required; /**< @brief whether to check that all required options were provided (default 1) */
  int check_ambiguity; /**< @brief whether to check for options already specified in the option structure gengetopt_args_info (default 0) */
  int print_errors; /**< @brief whether getopt_long should print an error message for a bad option (default 1) */
} ;

/** @brief the purpose string of the program */
extern const char *gengetopt_args_info_purpose;
/** @brief the usage string of the program */
extern const char *gengetopt_args_info_usage;
/** @brief the description string of the program */
extern const char *gengetopt_args_info_description;
/** @brief all the lines making the help output */
extern const char *gengetopt_args_info_help[];
/** @brief all the lines making the full help output (including hidden options) */
extern const char *gengetopt_args_info_full_help[];
/** @brief all the lines making the detailed help output (including hidden options and details) */
extern const char *gengetopt_args_info_detailed_help[];

/**
 * The command line parser
 * @param argc the number of command line options
 * @param argv the command line options
 * @param args_info the structure where option information will be stored
 * @return 0 if everything went fine, NON 0 if an error took place
 */
int cmdline_parser (int argc, char **argv,
  struct gengetopt_args_info *args_info);

/**
 * The command line parser (version with additional parameters - deprecated)
 * @param argc the number of command line options
 * @param argv the command line options
 * @param args_info the structure where option information will be stored
 * @param override whether to override possibly already present options
 * @param initialize whether to initialize the option structure my_args_info
 * @param check_required whether to check that all required options were provided
 * @return 0 if everything went fine, NON 0 if an error took place
 * @deprecated use cmdline_parser_ext() instead
 */
int cmdline_parser2 (int argc, char **argv,
  struct gengetopt_args_info *args_info,
  int override, int initialize, int check_required);

/**
 * The command line parser (version with additional parameters)
 * @param argc the number of command line options
 * @param argv the command line options
 * @param args_info the structure where option information will be stored
 * @param params additional parameters for the parser
 * @return 0 if everything went fine, NON 0 if an error took place
 */
int cmdline_parser_ext (int argc, char **argv,
  struct gengetopt_args_info *args_info,
  struct cmdline_parser_params *params);

/**
 * Save the contents of the option struct into an already open FILE stream.
 * @param outfile the stream where to dump options
 * @param args_info the option struct to dump
 * @return 0 if everything went fine, NON 0 if an error took place
 */
int cmdline_parser_dump(FILE *outfile,
  struct gengetopt_args_info *args_info);

/**
 * Save the contents of the option struct into a (text) file.
 * This file can be read by the config file parser (if generated by gengetopt)
 * @param filename the file where to save
 * @param args_info the option struct to save
 * @return 0 if everything went fine, NON 0 if an error took place
 */
int cmdline_parser_file_save(const char *filename,
  struct gengetopt_args_info *args_info);

/**
 * Print the help
 */
void cmdline_parser_print_help(void);
/**
 * Print the full help (including hidden options)
 */
void cmdline_parser_print_full_help(void);
/**
 * Print the detailed help (including hidden options and details)
 */
void cmdline_parser_print_detailed_help(void);
/**
 * Print the version
 */
void cmdline_parser_print_version(void);

/**
 * Initializes all the fields a cmdline_parser_params structure 
 * to their default values
 * @param params the structure to initialize
 */
void cmdline_parser_params_init(struct cmdline_parser_params *params);

/**
 * Allocates dynamically a cmdline_parser_params structure and initializes
 * all its fields to their default values
 * @return the created and initialized cmdline_parser_params structure
 */
struct cmdline_parser_params *cmdline_parser_params_create(void);

/**
 * Initializes the passed gengetopt_args_info structure's fields
 * (also set default values for options that have a default)
 * @param args_info the structure to initialize
 */
void cmdline_parser_init (struct gengetopt_args_info *args_info);
/**
 * Deallocates the string fields of the gengetopt_args_info structure
 * (but does not deallocate the structure itself)
 * @param args_info the structure to deallocate
 */
void cmdline_parser_free (struct gengetopt_args_info *args_info);

/**
 * Checks that all the required options were specified
 * @param args_info the structure to check
 * @param prog_name the name of the program that will be used to print
 *   possible errors
 * @return
 */
int cmdline_parser_required (struct gengetopt_args_info *args_info,
  const char *prog_name);


#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* BHGBUILDER_CMDLINE_H */
