#define ICALL_TABLE_corlib 1

static int corlib_icall_indexes [] = {
201,
208,
209,
210,
211,
212,
213,
214,
215,
216,
219,
220,
390,
391,
393,
422,
423,
424,
444,
445,
446,
447,
448,
539,
540,
541,
544,
591,
592,
593,
596,
598,
600,
602,
607,
615,
616,
617,
618,
619,
620,
621,
622,
623,
624,
625,
626,
627,
628,
629,
630,
631,
632,
633,
634,
635,
636,
637,
638,
639,
640,
641,
725,
726,
727,
728,
729,
730,
731,
732,
733,
734,
735,
736,
737,
738,
739,
740,
741,
742,
743,
744,
745,
746,
747,
748,
749,
885,
886,
894,
897,
899,
905,
906,
908,
909,
913,
915,
917,
918,
919,
920,
922,
923,
924,
927,
928,
931,
932,
933,
1009,
1010,
1012,
1020,
1021,
1022,
1023,
1024,
1028,
1029,
1030,
1031,
1032,
1033,
1035,
1036,
1037,
1039,
1040,
1042,
1046,
1047,
1048,
1321,
1543,
1544,
7968,
7969,
7971,
7972,
7973,
7974,
7975,
7976,
7978,
7980,
7982,
7983,
7984,
7992,
7994,
7998,
7999,
8001,
8003,
8005,
8017,
8026,
8027,
8029,
8030,
8031,
8032,
8033,
8035,
8037,
9170,
9174,
9176,
9177,
9178,
9179,
9237,
9238,
9239,
9240,
9261,
9262,
9263,
9264,
9266,
9306,
9357,
9360,
9370,
9371,
9372,
9373,
9781,
9782,
9787,
9788,
9840,
9841,
9842,
9871,
9877,
9884,
9894,
9898,
9990,
10000,
10001,
10014,
10015,
10016,
10017,
10018,
10019,
10020,
10027,
10043,
10064,
10065,
10074,
10076,
10083,
10084,
10087,
10089,
10094,
10100,
10101,
10108,
10110,
10120,
10123,
10124,
10125,
10136,
10148,
10154,
10155,
10156,
10158,
10159,
10169,
10188,
10210,
10211,
10212,
10213,
10214,
10231,
10236,
10241,
10272,
10273,
10801,
10802,
10885,
10969,
11235,
11236,
11245,
11246,
11247,
11253,
11331,
11508,
11509,
12481,
12482,
13801,
13820,
13827,
13828,
13830,
};
void ves_icall_System_Array_InternalCreate (int,int,int,int,int);
int ves_icall_System_Array_GetCorElementTypeOfElementType_raw (int,int);
int ves_icall_System_Array_IsValueOfElementType_raw (int,int,int);
int ves_icall_System_Array_CanChangePrimitive (int,int,int);
int ves_icall_System_Array_FastCopy_raw (int,int,int,int,int,int);
int ves_icall_System_Array_GetLength_raw (int,int,int);
int ves_icall_System_Array_GetLowerBound_raw (int,int,int);
void ves_icall_System_Array_GetGenericValue_icall (int,int,int);
int ves_icall_System_Array_GetValueImpl_raw (int,int,int);
void ves_icall_System_Array_SetGenericValue_icall (int,int,int);
void ves_icall_System_Array_SetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetValueRelaxedImpl_raw (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_Memmove (int,int,int);
void ves_icall_System_Buffer_BulkMoveWithWriteBarrier (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_ZeroMemory (int,int);
int ves_icall_System_Delegate_AllocDelegateLike_internal_raw (int,int);
int ves_icall_System_Delegate_CreateDelegate_internal_raw (int,int,int,int,int);
int ves_icall_System_Delegate_GetVirtualMethod_internal_raw (int,int);
int ves_icall_System_Enum_GetEnumValuesAndNames_raw (int,int,int,int);
int ves_icall_System_Enum_ToObject_raw (int,int64_t,int);
int ves_icall_System_Enum_InternalGetCorElementType_raw (int,int);
int ves_icall_System_Enum_get_underlying_type_raw (int,int);
int ves_icall_System_Enum_InternalHasFlag_raw (int,int,int);
int ves_icall_System_Environment_get_ProcessorCount ();
int ves_icall_System_Environment_get_TickCount ();
int64_t ves_icall_System_Environment_get_TickCount64 ();
void ves_icall_System_Environment_FailFast_raw (int,int,int,int);
int ves_icall_System_GC_GetCollectionCount (int);
void ves_icall_System_GC_register_ephemeron_array_raw (int,int);
int ves_icall_System_GC_get_ephemeron_tombstone_raw (int);
void ves_icall_System_GC_SuppressFinalize_raw (int,int);
void ves_icall_System_GC_ReRegisterForFinalize_raw (int,int);
void ves_icall_System_GC_GetGCMemoryInfo (int,int,int,int,int,int);
int ves_icall_System_GC_AllocPinnedArray_raw (int,int,int);
int ves_icall_System_Object_MemberwiseClone_raw (int,int);
double ves_icall_System_Math_Abs_double (double);
float ves_icall_System_Math_Abs_single (float);
double ves_icall_System_Math_Acos (double);
double ves_icall_System_Math_Acosh (double);
double ves_icall_System_Math_Asin (double);
double ves_icall_System_Math_Asinh (double);
double ves_icall_System_Math_Atan (double);
double ves_icall_System_Math_Atan2 (double,double);
double ves_icall_System_Math_Atanh (double);
double ves_icall_System_Math_Cbrt (double);
double ves_icall_System_Math_Ceiling (double);
double ves_icall_System_Math_Cos (double);
double ves_icall_System_Math_Cosh (double);
double ves_icall_System_Math_Exp (double);
double ves_icall_System_Math_Floor (double);
double ves_icall_System_Math_Log (double);
double ves_icall_System_Math_Log10 (double);
double ves_icall_System_Math_Pow (double,double);
double ves_icall_System_Math_Sin (double);
double ves_icall_System_Math_Sinh (double);
double ves_icall_System_Math_Sqrt (double);
double ves_icall_System_Math_Tan (double);
double ves_icall_System_Math_Tanh (double);
double ves_icall_System_Math_FusedMultiplyAdd (double,double,double);
int ves_icall_System_Math_ILogB (double);
double ves_icall_System_Math_Log2 (double);
double ves_icall_System_Math_ModF (double,int);
float ves_icall_System_MathF_Acos (float);
float ves_icall_System_MathF_Acosh (float);
float ves_icall_System_MathF_Asin (float);
float ves_icall_System_MathF_Asinh (float);
float ves_icall_System_MathF_Atan (float);
float ves_icall_System_MathF_Atan2 (float,float);
float ves_icall_System_MathF_Atanh (float);
float ves_icall_System_MathF_Cbrt (float);
float ves_icall_System_MathF_Ceiling (float);
float ves_icall_System_MathF_Cos (float);
float ves_icall_System_MathF_Cosh (float);
float ves_icall_System_MathF_Exp (float);
float ves_icall_System_MathF_Floor (float);
float ves_icall_System_MathF_Log (float);
float ves_icall_System_MathF_Log10 (float);
float ves_icall_System_MathF_Pow (float,float);
float ves_icall_System_MathF_Sin (float);
float ves_icall_System_MathF_Sinh (float);
float ves_icall_System_MathF_Sqrt (float);
float ves_icall_System_MathF_Tan (float);
float ves_icall_System_MathF_Tanh (float);
float ves_icall_System_MathF_FusedMultiplyAdd (float,float,float);
int ves_icall_System_MathF_ILogB (float);
float ves_icall_System_MathF_Log2 (float);
float ves_icall_System_MathF_ModF (float,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
int ves_icall_RuntimeType_make_array_type_raw (int,int,int);
int ves_icall_RuntimeType_make_byref_type_raw (int,int);
int ves_icall_RuntimeType_MakePointerType_raw (int,int);
int ves_icall_RuntimeType_MakeGenericType_raw (int,int,int);
int ves_icall_RuntimeType_GetMethodsByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetPropertiesByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetConstructors_native_raw (int,int,int);
void ves_icall_RuntimeType_GetInterfaceMapData_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetPacking_raw (int,int,int,int);
int ves_icall_System_Activator_CreateInstanceInternal_raw (int,int);
int ves_icall_RuntimeType_get_DeclaringMethod_raw (int,int);
int ves_icall_System_RuntimeType_getFullName_raw (int,int,int,int);
int ves_icall_RuntimeType_GetGenericArguments_raw (int,int,int);
int ves_icall_RuntimeType_GetGenericParameterPosition_raw (int,int);
int ves_icall_RuntimeType_GetEvents_native_raw (int,int,int,int);
int ves_icall_RuntimeType_GetFields_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetInterfaces_raw (int,int);
int ves_icall_RuntimeType_GetNestedTypes_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_get_DeclaringType_raw (int,int);
int ves_icall_RuntimeType_get_Name_raw (int,int);
int ves_icall_RuntimeType_get_Namespace_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetAttributes_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetCorElementType_raw (int,int);
int ves_icall_RuntimeTypeHandle_HasInstantiation_raw (int,int);
int ves_icall_RuntimeTypeHandle_IsComObject_raw (int,int);
int ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_HasReferences_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetArrayRank_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetAssembly_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetElementType_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetModule_raw (int,int);
int ves_icall_RuntimeTypeHandle_IsGenericVariable_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetBaseType_raw (int,int);
int ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw (int,int);
int ves_icall_RuntimeTypeHandle_is_subclass_of (int,int);
int ves_icall_RuntimeTypeHandle_IsByRefLike_raw (int,int);
int ves_icall_System_RuntimeTypeHandle_internal_from_name_raw (int,int,int,int,int,int);
int ves_icall_System_String_FastAllocateString_raw (int,int);
int ves_icall_System_String_InternalIsInterned_raw (int,int);
int ves_icall_System_String_InternalIntern_raw (int,int);
int ves_icall_System_Type_internal_from_handle_raw (int,int);
int ves_icall_System_ValueType_InternalGetHashCode_raw (int,int,int);
int ves_icall_System_ValueType_Equals_raw (int,int,int,int);
int ves_icall_System_Threading_Interlocked_CompareExchange_Int (int,int,int);
void ves_icall_System_Threading_Interlocked_CompareExchange_Object (int,int,int,int);
int ves_icall_System_Threading_Interlocked_Decrement_Int (int);
int64_t ves_icall_System_Threading_Interlocked_Decrement_Long (int);
int ves_icall_System_Threading_Interlocked_Increment_Int (int);
int64_t ves_icall_System_Threading_Interlocked_Increment_Long (int);
int ves_icall_System_Threading_Interlocked_Exchange_Int (int,int);
void ves_icall_System_Threading_Interlocked_Exchange_Object (int,int,int);
int64_t ves_icall_System_Threading_Interlocked_CompareExchange_Long (int,int64_t,int64_t);
int64_t ves_icall_System_Threading_Interlocked_Exchange_Long (int,int64_t);
int64_t ves_icall_System_Threading_Interlocked_Read_Long (int);
int ves_icall_System_Threading_Interlocked_Add_Int (int,int);
int64_t ves_icall_System_Threading_Interlocked_Add_Long (int,int64_t);
void ves_icall_System_Threading_Monitor_Monitor_Enter_raw (int,int);
void mono_monitor_exit_icall_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_test_synchronised_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_wait_raw (int,int,int,int);
void ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw (int,int,int,int,int);
int ves_icall_System_Threading_Thread_GetCurrentProcessorNumber_raw (int);
void ves_icall_System_Threading_Thread_InitInternal_raw (int,int);
int ves_icall_System_Threading_Thread_GetCurrentThread ();
void ves_icall_System_Threading_InternalThread_Thread_free_internal_raw (int,int);
int ves_icall_System_Threading_Thread_GetState_raw (int,int);
void ves_icall_System_Threading_Thread_SetState_raw (int,int,int);
void ves_icall_System_Threading_Thread_ClrState_raw (int,int,int);
void ves_icall_System_Threading_Thread_SetName_icall_raw (int,int,int,int);
int ves_icall_System_Threading_Thread_YieldInternal ();
void ves_icall_System_Threading_Thread_SetPriority_raw (int,int,int);
void ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw (int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw (int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw (int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw (int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw (int);
int ves_icall_System_GCHandle_InternalAlloc_raw (int,int,int);
void ves_icall_System_GCHandle_InternalFree_raw (int,int);
int ves_icall_System_GCHandle_InternalGet_raw (int,int);
void ves_icall_System_GCHandle_InternalSet_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError ();
void ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError (int);
void ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw (int,int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_IsPinnableType_raw (int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_SizeOfHelper_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw (int,int,int,int,int,int);
int mono_object_hash_icall_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw (int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw (int,int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_RunClassConstructor_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack ();
int ves_icall_System_Reflection_Assembly_GetExecutingAssembly_raw (int,int);
int ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw (int);
int ves_icall_System_Reflection_Assembly_InternalLoad_raw (int,int,int,int);
int ves_icall_System_Reflection_Assembly_InternalGetType_raw (int,int,int,int,int,int);
void mono_digest_get_public_token (int,int,int);
int ves_icall_System_Reflection_AssemblyName_GetNativeName (int);
int ves_icall_System_Reflection_AssemblyName_ParseAssemblyName (int,int,int,int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw (int,int,int,int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw (int,int);
int ves_icall_MonoCustomAttrs_IsDefinedInternal_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_get_EntryPoint_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_get_location_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_get_code_base_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_get_fullname_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_InternalImageRuntimeVersion_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw (int,int,int,int,int);
int ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetModulesInternal_raw (int,int);
void ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw (int,int,int,int,int,int,int);
void ves_icall_RuntimeEventInfo_get_event_info_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_ResolveType_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetParentType_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_GetFieldOffset_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetValueInternal_raw (int,int,int);
void ves_icall_RuntimeFieldInfo_SetValueInternal_raw (int,int,int,int);
int ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
void ves_icall_get_method_info_raw (int,int,int);
int ves_icall_get_method_attributes (int);
int ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw (int,int,int);
int ves_icall_System_MonoMethodInfo_get_retval_marshal_raw (int,int);
int ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw (int,int,int,int);
int ves_icall_RuntimeMethodInfo_get_name_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_base_method_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
void ves_icall_RuntimeMethodInfo_GetPInvoke_raw (int,int,int,int,int);
int ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw (int,int,int);
int ves_icall_RuntimeMethodInfo_GetGenericArguments_raw (int,int);
int ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimeModule_GetMDStreamVersion_raw (int,int);
int ves_icall_System_Reflection_RuntimeModule_InternalGetTypes_raw (int,int);
void ves_icall_System_Reflection_RuntimeModule_GetGuidInternal_raw (int,int,int);
int ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw (int,int,int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_RuntimeParameterInfo_GetTypeModifiers_raw (int,int,int,int,int);
void ves_icall_RuntimePropertyInfo_get_property_info_raw (int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw (int,int,int);
void ves_icall_AssemblyBuilder_basic_init_raw (int,int);
void ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw (int,int);
int ves_icall_CustomAttributeBuilder_GetBlob_raw (int,int,int,int,int,int,int,int);
void ves_icall_DynamicMethod_create_dynamic_method_raw (int,int);
void ves_icall_ModuleBuilder_basic_init_raw (int,int);
void ves_icall_ModuleBuilder_set_wrappers_type_raw (int,int,int);
int ves_icall_ModuleBuilder_getUSIndex_raw (int,int,int);
int ves_icall_ModuleBuilder_getToken_raw (int,int,int,int);
int ves_icall_ModuleBuilder_getMethodToken_raw (int,int,int,int);
void ves_icall_ModuleBuilder_RegisterToken_raw (int,int,int,int);
int ves_icall_TypeBuilder_create_runtime_class_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw (int,int);
int ves_icall_System_Diagnostics_Debugger_IsLogging ();
void ves_icall_System_Diagnostics_Debugger_Log (int,int,int);
int ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass (int);
void ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree (int);
void ves_icall_Mono_RuntimeMarshal_FreeAssemblyName (int,int);
int ves_icall_Mono_SafeStringMarshal_StringToUtf8 (int);
void ves_icall_Mono_SafeStringMarshal_GFree (int);
static void *corlib_icall_funcs [] = {
// token 201,
ves_icall_System_Array_InternalCreate,
// token 208,
ves_icall_System_Array_GetCorElementTypeOfElementType_raw,
// token 209,
ves_icall_System_Array_IsValueOfElementType_raw,
// token 210,
ves_icall_System_Array_CanChangePrimitive,
// token 211,
ves_icall_System_Array_FastCopy_raw,
// token 212,
ves_icall_System_Array_GetLength_raw,
// token 213,
ves_icall_System_Array_GetLowerBound_raw,
// token 214,
ves_icall_System_Array_GetGenericValue_icall,
// token 215,
ves_icall_System_Array_GetValueImpl_raw,
// token 216,
ves_icall_System_Array_SetGenericValue_icall,
// token 219,
ves_icall_System_Array_SetValueImpl_raw,
// token 220,
ves_icall_System_Array_SetValueRelaxedImpl_raw,
// token 390,
ves_icall_System_Runtime_RuntimeImports_Memmove,
// token 391,
ves_icall_System_Buffer_BulkMoveWithWriteBarrier,
// token 393,
ves_icall_System_Runtime_RuntimeImports_ZeroMemory,
// token 422,
ves_icall_System_Delegate_AllocDelegateLike_internal_raw,
// token 423,
ves_icall_System_Delegate_CreateDelegate_internal_raw,
// token 424,
ves_icall_System_Delegate_GetVirtualMethod_internal_raw,
// token 444,
ves_icall_System_Enum_GetEnumValuesAndNames_raw,
// token 445,
ves_icall_System_Enum_ToObject_raw,
// token 446,
ves_icall_System_Enum_InternalGetCorElementType_raw,
// token 447,
ves_icall_System_Enum_get_underlying_type_raw,
// token 448,
ves_icall_System_Enum_InternalHasFlag_raw,
// token 539,
ves_icall_System_Environment_get_ProcessorCount,
// token 540,
ves_icall_System_Environment_get_TickCount,
// token 541,
ves_icall_System_Environment_get_TickCount64,
// token 544,
ves_icall_System_Environment_FailFast_raw,
// token 591,
ves_icall_System_GC_GetCollectionCount,
// token 592,
ves_icall_System_GC_register_ephemeron_array_raw,
// token 593,
ves_icall_System_GC_get_ephemeron_tombstone_raw,
// token 596,
ves_icall_System_GC_SuppressFinalize_raw,
// token 598,
ves_icall_System_GC_ReRegisterForFinalize_raw,
// token 600,
ves_icall_System_GC_GetGCMemoryInfo,
// token 602,
ves_icall_System_GC_AllocPinnedArray_raw,
// token 607,
ves_icall_System_Object_MemberwiseClone_raw,
// token 615,
ves_icall_System_Math_Abs_double,
// token 616,
ves_icall_System_Math_Abs_single,
// token 617,
ves_icall_System_Math_Acos,
// token 618,
ves_icall_System_Math_Acosh,
// token 619,
ves_icall_System_Math_Asin,
// token 620,
ves_icall_System_Math_Asinh,
// token 621,
ves_icall_System_Math_Atan,
// token 622,
ves_icall_System_Math_Atan2,
// token 623,
ves_icall_System_Math_Atanh,
// token 624,
ves_icall_System_Math_Cbrt,
// token 625,
ves_icall_System_Math_Ceiling,
// token 626,
ves_icall_System_Math_Cos,
// token 627,
ves_icall_System_Math_Cosh,
// token 628,
ves_icall_System_Math_Exp,
// token 629,
ves_icall_System_Math_Floor,
// token 630,
ves_icall_System_Math_Log,
// token 631,
ves_icall_System_Math_Log10,
// token 632,
ves_icall_System_Math_Pow,
// token 633,
ves_icall_System_Math_Sin,
// token 634,
ves_icall_System_Math_Sinh,
// token 635,
ves_icall_System_Math_Sqrt,
// token 636,
ves_icall_System_Math_Tan,
// token 637,
ves_icall_System_Math_Tanh,
// token 638,
ves_icall_System_Math_FusedMultiplyAdd,
// token 639,
ves_icall_System_Math_ILogB,
// token 640,
ves_icall_System_Math_Log2,
// token 641,
ves_icall_System_Math_ModF,
// token 725,
ves_icall_System_MathF_Acos,
// token 726,
ves_icall_System_MathF_Acosh,
// token 727,
ves_icall_System_MathF_Asin,
// token 728,
ves_icall_System_MathF_Asinh,
// token 729,
ves_icall_System_MathF_Atan,
// token 730,
ves_icall_System_MathF_Atan2,
// token 731,
ves_icall_System_MathF_Atanh,
// token 732,
ves_icall_System_MathF_Cbrt,
// token 733,
ves_icall_System_MathF_Ceiling,
// token 734,
ves_icall_System_MathF_Cos,
// token 735,
ves_icall_System_MathF_Cosh,
// token 736,
ves_icall_System_MathF_Exp,
// token 737,
ves_icall_System_MathF_Floor,
// token 738,
ves_icall_System_MathF_Log,
// token 739,
ves_icall_System_MathF_Log10,
// token 740,
ves_icall_System_MathF_Pow,
// token 741,
ves_icall_System_MathF_Sin,
// token 742,
ves_icall_System_MathF_Sinh,
// token 743,
ves_icall_System_MathF_Sqrt,
// token 744,
ves_icall_System_MathF_Tan,
// token 745,
ves_icall_System_MathF_Tanh,
// token 746,
ves_icall_System_MathF_FusedMultiplyAdd,
// token 747,
ves_icall_System_MathF_ILogB,
// token 748,
ves_icall_System_MathF_Log2,
// token 749,
ves_icall_System_MathF_ModF,
// token 885,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 886,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 894,
ves_icall_RuntimeType_make_array_type_raw,
// token 897,
ves_icall_RuntimeType_make_byref_type_raw,
// token 899,
ves_icall_RuntimeType_MakePointerType_raw,
// token 905,
ves_icall_RuntimeType_MakeGenericType_raw,
// token 906,
ves_icall_RuntimeType_GetMethodsByName_native_raw,
// token 908,
ves_icall_RuntimeType_GetPropertiesByName_native_raw,
// token 909,
ves_icall_RuntimeType_GetConstructors_native_raw,
// token 913,
ves_icall_RuntimeType_GetInterfaceMapData_raw,
// token 915,
ves_icall_RuntimeType_GetPacking_raw,
// token 917,
ves_icall_System_Activator_CreateInstanceInternal_raw,
// token 918,
ves_icall_RuntimeType_get_DeclaringMethod_raw,
// token 919,
ves_icall_System_RuntimeType_getFullName_raw,
// token 920,
ves_icall_RuntimeType_GetGenericArguments_raw,
// token 922,
ves_icall_RuntimeType_GetGenericParameterPosition_raw,
// token 923,
ves_icall_RuntimeType_GetEvents_native_raw,
// token 924,
ves_icall_RuntimeType_GetFields_native_raw,
// token 927,
ves_icall_RuntimeType_GetInterfaces_raw,
// token 928,
ves_icall_RuntimeType_GetNestedTypes_native_raw,
// token 931,
ves_icall_RuntimeType_get_DeclaringType_raw,
// token 932,
ves_icall_RuntimeType_get_Name_raw,
// token 933,
ves_icall_RuntimeType_get_Namespace_raw,
// token 1009,
ves_icall_RuntimeTypeHandle_GetAttributes_raw,
// token 1010,
ves_icall_reflection_get_token_raw,
// token 1012,
ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw,
// token 1020,
ves_icall_RuntimeTypeHandle_GetCorElementType_raw,
// token 1021,
ves_icall_RuntimeTypeHandle_HasInstantiation_raw,
// token 1022,
ves_icall_RuntimeTypeHandle_IsComObject_raw,
// token 1023,
ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw,
// token 1024,
ves_icall_RuntimeTypeHandle_HasReferences_raw,
// token 1028,
ves_icall_RuntimeTypeHandle_GetArrayRank_raw,
// token 1029,
ves_icall_RuntimeTypeHandle_GetAssembly_raw,
// token 1030,
ves_icall_RuntimeTypeHandle_GetElementType_raw,
// token 1031,
ves_icall_RuntimeTypeHandle_GetModule_raw,
// token 1032,
ves_icall_RuntimeTypeHandle_IsGenericVariable_raw,
// token 1033,
ves_icall_RuntimeTypeHandle_GetBaseType_raw,
// token 1035,
ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw,
// token 1036,
ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition_raw,
// token 1037,
ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw,
// token 1039,
ves_icall_RuntimeTypeHandle_is_subclass_of,
// token 1040,
ves_icall_RuntimeTypeHandle_IsByRefLike_raw,
// token 1042,
ves_icall_System_RuntimeTypeHandle_internal_from_name_raw,
// token 1046,
ves_icall_System_String_FastAllocateString_raw,
// token 1047,
ves_icall_System_String_InternalIsInterned_raw,
// token 1048,
ves_icall_System_String_InternalIntern_raw,
// token 1321,
ves_icall_System_Type_internal_from_handle_raw,
// token 1543,
ves_icall_System_ValueType_InternalGetHashCode_raw,
// token 1544,
ves_icall_System_ValueType_Equals_raw,
// token 7968,
ves_icall_System_Threading_Interlocked_CompareExchange_Int,
// token 7969,
ves_icall_System_Threading_Interlocked_CompareExchange_Object,
// token 7971,
ves_icall_System_Threading_Interlocked_Decrement_Int,
// token 7972,
ves_icall_System_Threading_Interlocked_Decrement_Long,
// token 7973,
ves_icall_System_Threading_Interlocked_Increment_Int,
// token 7974,
ves_icall_System_Threading_Interlocked_Increment_Long,
// token 7975,
ves_icall_System_Threading_Interlocked_Exchange_Int,
// token 7976,
ves_icall_System_Threading_Interlocked_Exchange_Object,
// token 7978,
ves_icall_System_Threading_Interlocked_CompareExchange_Long,
// token 7980,
ves_icall_System_Threading_Interlocked_Exchange_Long,
// token 7982,
ves_icall_System_Threading_Interlocked_Read_Long,
// token 7983,
ves_icall_System_Threading_Interlocked_Add_Int,
// token 7984,
ves_icall_System_Threading_Interlocked_Add_Long,
// token 7992,
ves_icall_System_Threading_Monitor_Monitor_Enter_raw,
// token 7994,
mono_monitor_exit_icall_raw,
// token 7998,
ves_icall_System_Threading_Monitor_Monitor_test_synchronised_raw,
// token 7999,
ves_icall_System_Threading_Monitor_Monitor_pulse_raw,
// token 8001,
ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw,
// token 8003,
ves_icall_System_Threading_Monitor_Monitor_wait_raw,
// token 8005,
ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw,
// token 8017,
ves_icall_System_Threading_Thread_GetCurrentProcessorNumber_raw,
// token 8026,
ves_icall_System_Threading_Thread_InitInternal_raw,
// token 8027,
ves_icall_System_Threading_Thread_GetCurrentThread,
// token 8029,
ves_icall_System_Threading_InternalThread_Thread_free_internal_raw,
// token 8030,
ves_icall_System_Threading_Thread_GetState_raw,
// token 8031,
ves_icall_System_Threading_Thread_SetState_raw,
// token 8032,
ves_icall_System_Threading_Thread_ClrState_raw,
// token 8033,
ves_icall_System_Threading_Thread_SetName_icall_raw,
// token 8035,
ves_icall_System_Threading_Thread_YieldInternal,
// token 8037,
ves_icall_System_Threading_Thread_SetPriority_raw,
// token 9170,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw,
// token 9174,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw,
// token 9176,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw,
// token 9177,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw,
// token 9178,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw,
// token 9179,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw,
// token 9237,
ves_icall_System_GCHandle_InternalAlloc_raw,
// token 9238,
ves_icall_System_GCHandle_InternalFree_raw,
// token 9239,
ves_icall_System_GCHandle_InternalGet_raw,
// token 9240,
ves_icall_System_GCHandle_InternalSet_raw,
// token 9261,
ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError,
// token 9262,
ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError,
// token 9263,
ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw,
// token 9264,
ves_icall_System_Runtime_InteropServices_Marshal_IsPinnableType_raw,
// token 9266,
ves_icall_System_Runtime_InteropServices_Marshal_SizeOfHelper_raw,
// token 9306,
ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw,
// token 9357,
mono_object_hash_icall_raw,
// token 9360,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw,
// token 9370,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw,
// token 9371,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw,
// token 9372,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_RunClassConstructor_raw,
// token 9373,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack,
// token 9781,
ves_icall_System_Reflection_Assembly_GetExecutingAssembly_raw,
// token 9782,
ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw,
// token 9787,
ves_icall_System_Reflection_Assembly_InternalLoad_raw,
// token 9788,
ves_icall_System_Reflection_Assembly_InternalGetType_raw,
// token 9840,
mono_digest_get_public_token,
// token 9841,
ves_icall_System_Reflection_AssemblyName_GetNativeName,
// token 9842,
ves_icall_System_Reflection_AssemblyName_ParseAssemblyName,
// token 9871,
ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw,
// token 9877,
ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw,
// token 9884,
ves_icall_MonoCustomAttrs_IsDefinedInternal_raw,
// token 9894,
ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw,
// token 9898,
ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw,
// token 9990,
ves_icall_System_Reflection_RuntimeAssembly_get_EntryPoint_raw,
// token 10000,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw,
// token 10001,
ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw,
// token 10014,
ves_icall_System_Reflection_RuntimeAssembly_get_location_raw,
// token 10015,
ves_icall_System_Reflection_RuntimeAssembly_get_code_base_raw,
// token 10016,
ves_icall_System_Reflection_RuntimeAssembly_get_fullname_raw,
// token 10017,
ves_icall_System_Reflection_RuntimeAssembly_InternalImageRuntimeVersion_raw,
// token 10018,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw,
// token 10019,
ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw,
// token 10020,
ves_icall_System_Reflection_RuntimeAssembly_GetModulesInternal_raw,
// token 10027,
ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw,
// token 10043,
ves_icall_RuntimeEventInfo_get_event_info_raw,
// token 10064,
ves_icall_reflection_get_token_raw,
// token 10065,
ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw,
// token 10074,
ves_icall_RuntimeFieldInfo_ResolveType_raw,
// token 10076,
ves_icall_RuntimeFieldInfo_GetParentType_raw,
// token 10083,
ves_icall_RuntimeFieldInfo_GetFieldOffset_raw,
// token 10084,
ves_icall_RuntimeFieldInfo_GetValueInternal_raw,
// token 10087,
ves_icall_RuntimeFieldInfo_SetValueInternal_raw,
// token 10089,
ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw,
// token 10094,
ves_icall_reflection_get_token_raw,
// token 10100,
ves_icall_get_method_info_raw,
// token 10101,
ves_icall_get_method_attributes,
// token 10108,
ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw,
// token 10110,
ves_icall_System_MonoMethodInfo_get_retval_marshal_raw,
// token 10120,
ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw,
// token 10123,
ves_icall_RuntimeMethodInfo_get_name_raw,
// token 10124,
ves_icall_RuntimeMethodInfo_get_base_method_raw,
// token 10125,
ves_icall_reflection_get_token_raw,
// token 10136,
ves_icall_InternalInvoke_raw,
// token 10148,
ves_icall_RuntimeMethodInfo_GetPInvoke_raw,
// token 10154,
ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw,
// token 10155,
ves_icall_RuntimeMethodInfo_GetGenericArguments_raw,
// token 10156,
ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw,
// token 10158,
ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw,
// token 10159,
ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw,
// token 10169,
ves_icall_InternalInvoke_raw,
// token 10188,
ves_icall_reflection_get_token_raw,
// token 10210,
ves_icall_reflection_get_token_raw,
// token 10211,
ves_icall_System_Reflection_RuntimeModule_GetMDStreamVersion_raw,
// token 10212,
ves_icall_System_Reflection_RuntimeModule_InternalGetTypes_raw,
// token 10213,
ves_icall_System_Reflection_RuntimeModule_GetGuidInternal_raw,
// token 10214,
ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw,
// token 10231,
ves_icall_reflection_get_token_raw,
// token 10236,
ves_icall_RuntimeParameterInfo_GetTypeModifiers_raw,
// token 10241,
ves_icall_RuntimePropertyInfo_get_property_info_raw,
// token 10272,
ves_icall_reflection_get_token_raw,
// token 10273,
ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw,
// token 10801,
ves_icall_AssemblyBuilder_basic_init_raw,
// token 10802,
ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw,
// token 10885,
ves_icall_CustomAttributeBuilder_GetBlob_raw,
// token 10969,
ves_icall_DynamicMethod_create_dynamic_method_raw,
// token 11235,
ves_icall_ModuleBuilder_basic_init_raw,
// token 11236,
ves_icall_ModuleBuilder_set_wrappers_type_raw,
// token 11245,
ves_icall_ModuleBuilder_getUSIndex_raw,
// token 11246,
ves_icall_ModuleBuilder_getToken_raw,
// token 11247,
ves_icall_ModuleBuilder_getMethodToken_raw,
// token 11253,
ves_icall_ModuleBuilder_RegisterToken_raw,
// token 11331,
ves_icall_TypeBuilder_create_runtime_class_raw,
// token 11508,
ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw,
// token 11509,
ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw,
// token 12481,
ves_icall_System_Diagnostics_Debugger_IsLogging,
// token 12482,
ves_icall_System_Diagnostics_Debugger_Log,
// token 13801,
ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass,
// token 13820,
ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree,
// token 13827,
ves_icall_Mono_RuntimeMarshal_FreeAssemblyName,
// token 13828,
ves_icall_Mono_SafeStringMarshal_StringToUtf8,
// token 13830,
ves_icall_Mono_SafeStringMarshal_GFree,
};
static uint8_t corlib_icall_handles [] = {
0,
1,
1,
0,
1,
1,
1,
0,
1,
0,
1,
1,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
0,
1,
0,
1,
1,
1,
1,
0,
1,
1,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
0,
0,
0,
0,
0,
};
