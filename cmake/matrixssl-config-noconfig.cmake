#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "MatrixSSL::Core" for configuration ""
set_property(TARGET MatrixSSL::Core APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(MatrixSSL::Core PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_NOCONFIG "C"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libcore_s.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS MatrixSSL::Core )
list(APPEND _IMPORT_CHECK_FILES_FOR_MatrixSSL::Core "${_IMPORT_PREFIX}/lib/libcore_s.a" )

# Import target "MatrixSSL::Crypto" for configuration ""
set_property(TARGET MatrixSSL::Crypto APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(MatrixSSL::Crypto PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_NOCONFIG "C"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libcrypt_s.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS MatrixSSL::Crypto )
list(APPEND _IMPORT_CHECK_FILES_FOR_MatrixSSL::Crypto "${_IMPORT_PREFIX}/lib/libcrypt_s.a" )

# Import target "MatrixSSL::Ssl" for configuration ""
set_property(TARGET MatrixSSL::Ssl APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(MatrixSSL::Ssl PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_NOCONFIG "C"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libssl_s.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS MatrixSSL::Ssl )
list(APPEND _IMPORT_CHECK_FILES_FOR_MatrixSSL::Ssl "${_IMPORT_PREFIX}/lib/libssl_s.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
