add_executable(sqlite3 
    ${SRC}/sqlite/dist/sqlite3.c
    ${SRC}/sqlite/dist/shell.c
    )
    
target_compile_definitions(sqlite3 PRIVATE 
    -DNDEBUG=1
    -DHAVE_USLEEP=1
    -DSQLITE_HAVE_ISNAN
    -DSQLITE_DEFAULT_JOURNAL_SIZE_LIMIT=1048576
    -DSQLITE_THREADSAFE=2
    -DSQLITE_TEMP_STORE=3
    -DSQLITE_POWERSAFE_OVERWRITE=1
    -DSQLITE_DEFAULT_FILE_FORMAT=4
    -DSQLITE_DEFAULT_AUTOVACUUM=1
    -DSQLITE_ENABLE_MEMORY_MANAGEMENT=1
    -DSQLITE_ENABLE_FTS3
    -DSQLITE_ENABLE_FTS3_BACKWARDS
    -DSQLITE_ENABLE_FTS4
    -DSQLITE_OMIT_BUILTIN_TEST
    -DSQLITE_OMIT_COMPILEOPTION_DIAGS
    -DSQLITE_OMIT_LOAD_EXTENSION
    -DSQLITE_DEFAULT_FILE_PERMISSIONS=0600
    -DSQLITE_SECURE_DELETE
    -DSQLITE_ENABLE_BATCH_ATOMIC_WRITE
    -DBIONIC_IOCTL_NO_SIGNEDNESS_OVERLOAD
    -DSQLITE_DEFAULT_LEGACY_ALTER_TABLE
    -DSQLITE_PRINTF_PRECISION_LIMIT=100000000
    -DUSE_PREAD64
    -Dfdatasync=fdatasync
    -DHAVE_MALLOC_H=1
    -DHAVE_MALLOC_USABLE_SIZE
    -DSQLITE_ENABLE_DBSTAT_VTAB
    -DNO_ANDROID_FUNCS=1
    )
