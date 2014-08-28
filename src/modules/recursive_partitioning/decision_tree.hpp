/* ----------------------------------------------------------------------- *//**
 *
 * @file decision_tree.hpp
 *
 *//* ----------------------------------------------------------------------- */

DECLARE_UDF(recursive_partitioning, initialize_decision_tree)

DECLARE_UDF(recursive_partitioning, compute_leaf_stats_transition)
DECLARE_UDF(recursive_partitioning, compute_leaf_stats_merge)

DECLARE_UDF(recursive_partitioning, dt_apply)

DECLARE_UDF(recursive_partitioning, print_decision_tree)
DECLARE_UDF(recursive_partitioning, predict_dt_response)
DECLARE_UDF(recursive_partitioning, predict_dt_prob)

DECLARE_UDF(recursive_partitioning, display_decision_tree)
DECLARE_UDF(recursive_partitioning, display_text_tree)