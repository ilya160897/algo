FILE(REMOVE_RECURSE
  "CMakeFiles/test-all"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/test-all.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
