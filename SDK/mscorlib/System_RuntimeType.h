#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Reflection_TypeInfo.h"
#include "System_Reflection_BindingFlags.h"
namespace mscorlib::System { struct MonoTypeInfo; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Reflection { struct RuntimeConstructorInfo; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct RuntimeType; };
namespace mscorlib::System { struct String; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_RuntimeType_MemberListType.h"
namespace mscorlib::System::Reflection { struct MemberInfo; };
namespace mscorlib::System::Reflection { struct RuntimeMethodInfo; };
#include "System_Reflection_CallingConventions.h"
namespace mscorlib::System::Reflection { struct MethodBase; };
namespace mscorlib::System::Reflection { struct MethodInfo; };
#include "System_RuntimeType_ListBuilder_1.h"
namespace mscorlib::System { template <typename T> struct RuntimeType_ListBuilder_1; };
namespace mscorlib::System::Reflection { struct ConstructorInfo; };
namespace mscorlib::System::Reflection { struct PropertyInfo; };
namespace mscorlib::System::Reflection { struct EventInfo; };
namespace mscorlib::System::Reflection { struct FieldInfo; };
namespace mscorlib::System::Reflection { struct Binder; };
#include "System_Reflection_ParameterModifier.h"
namespace mscorlib::System::Reflection { struct ParameterModifier; };
#include "System_Reflection_MemberTypes.h"
namespace mscorlib::System::Reflection { struct Module; };
namespace mscorlib::System::Reflection { struct RuntimeModule; };
namespace mscorlib::System::Reflection { struct Assembly; };
namespace mscorlib::System::Reflection { struct RuntimeAssembly; };
#include "System_RuntimeTypeHandle.h"
namespace mscorlib::System { struct RuntimeTypeHandle; };
#include "System_Reflection_TypeAttributes.h"
#include "System_Reflection_GenericParameterAttributes.h"
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct Array; };
namespace mscorlib::System::Globalization { struct CultureInfo; };
namespace mscorlib::System::Runtime::Serialization { struct SerializationInfo; };
#include "System_Runtime_Serialization_StreamingContext.h"
namespace mscorlib::System::Runtime::Serialization { struct StreamingContext; };
namespace mscorlib::System::Reflection { struct CustomAttributeData; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IList_1; };
#include "System_Threading_StackCrawlMark.h"
namespace mscorlib::System::Reflection { struct MonoCMethod; };
#include "System_TypeNameKind.h"
#include "System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
namespace mscorlib::System::Reflection { struct RuntimePropertyInfo; };
#include "System_Guid.h"
namespace mscorlib::System { struct Guid; };
#include "System_TypeCode.h"
namespace mscorlib::System::Reflection { struct RuntimeFieldInfo; };
namespace mscorlib::System::Reflection { struct RuntimeEventInfo; };

namespace mscorlib::System
{
	struct RuntimeType : mscorlib::System::Reflection::TypeInfo
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::MonoTypeInfo* type_info;
		mscorlib::System::Object* GenericCache;
		mscorlib::System::Reflection::RuntimeConstructorInfo* m_serializationCtor;
		struct StaticFields
		{
			mscorlib::System::RuntimeType* ValueType;
			mscorlib::System::RuntimeType* EnumType;
			mscorlib::System::RuntimeType* ObjectType;
			mscorlib::System::RuntimeType* StringType;
			mscorlib::System::RuntimeType* DelegateType;
			IL2CPP::Array<mscorlib::System::Type*>* s_SICtorParamTypes;
			mscorlib::System::Reflection::BindingFlags MemberBindingMask;
			mscorlib::System::Reflection::BindingFlags InvocationMask;
			mscorlib::System::Reflection::BindingFlags BinderNonCreateInstance;
			mscorlib::System::Reflection::BindingFlags BinderGetSetProperty;
			mscorlib::System::Reflection::BindingFlags BinderSetInvokeProperty;
			mscorlib::System::Reflection::BindingFlags BinderGetSetField;
			mscorlib::System::Reflection::BindingFlags BinderSetInvokeField;
			mscorlib::System::Reflection::BindingFlags BinderNonFieldGetSet;
			mscorlib::System::Reflection::BindingFlags ClassicBindingMask;
			mscorlib::System::RuntimeType* s_typedRef;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void ThrowIfTypeNeverValidGenericArgument(mscorlib::System::RuntimeType* type);
		static void SanityCheckGenericArguments(IL2CPP::Array<mscorlib::System::RuntimeType*>* genericArguments, IL2CPP::Array<mscorlib::System::RuntimeType*>* genericParamters);
		static void SplitName(mscorlib::System::String* fullname, mscorlib::System::String& name, mscorlib::System::String& ns);
		static void FilterHelper(mscorlib::System::Reflection::BindingFlags bindingFlags, mscorlib::System::String& name, bool allowPrefixLookup, bool& prefixLookup, bool& ignoreCase, mscorlib::System::RuntimeType_MemberListType& listType);
		static void FilterHelper(mscorlib::System::Reflection::BindingFlags bindingFlags, mscorlib::System::String& name, bool& ignoreCase, mscorlib::System::RuntimeType_MemberListType& listType);
		static bool FilterApplyPrefixLookup(mscorlib::System::Reflection::MemberInfo* memberInfo, mscorlib::System::String* name, bool ignoreCase);
		static bool FilterApplyBase(mscorlib::System::Reflection::MemberInfo* memberInfo, mscorlib::System::Reflection::BindingFlags bindingFlags, bool isPublic, bool isNonProtectedInternal, bool isStatic, mscorlib::System::String* name, bool prefixLookup);
		static bool FilterApplyType(mscorlib::System::Type* type, mscorlib::System::Reflection::BindingFlags bindingFlags, mscorlib::System::String* name, bool prefixLookup, mscorlib::System::String* ns);
		static bool FilterApplyMethodInfo(mscorlib::System::Reflection::RuntimeMethodInfo* method, mscorlib::System::Reflection::BindingFlags bindingFlags, mscorlib::System::Reflection::CallingConventions callConv, IL2CPP::Array<mscorlib::System::Type*>* argumentTypes);
		static bool FilterApplyConstructorInfo(mscorlib::System::Reflection::RuntimeConstructorInfo* constructor, mscorlib::System::Reflection::BindingFlags bindingFlags, mscorlib::System::Reflection::CallingConventions callConv, IL2CPP::Array<mscorlib::System::Type*>* argumentTypes);
		static bool FilterApplyMethodBase(mscorlib::System::Reflection::MethodBase* methodBase, mscorlib::System::Reflection::BindingFlags methodFlags, mscorlib::System::Reflection::BindingFlags bindingFlags, mscorlib::System::Reflection::CallingConventions callConv, IL2CPP::Array<mscorlib::System::Type*>* argumentTypes);
		void _ctor();
		bool IsSpecialSerializableType();
		mscorlib::System::RuntimeType_ListBuilder_1<mscorlib::System::Reflection::MethodInfo> GetMethodCandidates(mscorlib::System::String* name, mscorlib::System::Reflection::BindingFlags bindingAttr, mscorlib::System::Reflection::CallingConventions callConv, IL2CPP::Array<mscorlib::System::Type*>* types, bool allowPrefixLookup);
		mscorlib::System::RuntimeType_ListBuilder_1<mscorlib::System::Reflection::ConstructorInfo> GetConstructorCandidates(mscorlib::System::String* name, mscorlib::System::Reflection::BindingFlags bindingAttr, mscorlib::System::Reflection::CallingConventions callConv, IL2CPP::Array<mscorlib::System::Type*>* types, bool allowPrefixLookup);
		mscorlib::System::RuntimeType_ListBuilder_1<mscorlib::System::Reflection::PropertyInfo> GetPropertyCandidates(mscorlib::System::String* name, mscorlib::System::Reflection::BindingFlags bindingAttr, IL2CPP::Array<mscorlib::System::Type*>* types, bool allowPrefixLookup);
		mscorlib::System::RuntimeType_ListBuilder_1<mscorlib::System::Reflection::EventInfo> GetEventCandidates(mscorlib::System::String* name, mscorlib::System::Reflection::BindingFlags bindingAttr, bool allowPrefixLookup);
		mscorlib::System::RuntimeType_ListBuilder_1<mscorlib::System::Reflection::FieldInfo> GetFieldCandidates(mscorlib::System::String* name, mscorlib::System::Reflection::BindingFlags bindingAttr, bool allowPrefixLookup);
		mscorlib::System::RuntimeType_ListBuilder_1<mscorlib::System::Type> GetNestedTypeCandidates(mscorlib::System::String* fullname, mscorlib::System::Reflection::BindingFlags bindingAttr, bool allowPrefixLookup);
		IL2CPP::Array<mscorlib::System::Reflection::MethodInfo*>* GetMethods(mscorlib::System::Reflection::BindingFlags bindingAttr);
		IL2CPP::Array<mscorlib::System::Reflection::ConstructorInfo*>* GetConstructors(mscorlib::System::Reflection::BindingFlags bindingAttr);
		IL2CPP::Array<mscorlib::System::Reflection::PropertyInfo*>* GetProperties(mscorlib::System::Reflection::BindingFlags bindingAttr);
		IL2CPP::Array<mscorlib::System::Reflection::EventInfo*>* GetEvents(mscorlib::System::Reflection::BindingFlags bindingAttr);
		IL2CPP::Array<mscorlib::System::Reflection::FieldInfo*>* GetFields(mscorlib::System::Reflection::BindingFlags bindingAttr);
		mscorlib::System::Reflection::MethodInfo* GetMethodImpl(mscorlib::System::String* name, mscorlib::System::Reflection::BindingFlags bindingAttr, mscorlib::System::Reflection::Binder* binder, mscorlib::System::Reflection::CallingConventions callConv, IL2CPP::Array<mscorlib::System::Type*>* types, IL2CPP::Array<mscorlib::System::Reflection::ParameterModifier>* modifiers);
		mscorlib::System::Reflection::ConstructorInfo* GetConstructorImpl(mscorlib::System::Reflection::BindingFlags bindingAttr, mscorlib::System::Reflection::Binder* binder, mscorlib::System::Reflection::CallingConventions callConvention, IL2CPP::Array<mscorlib::System::Type*>* types, IL2CPP::Array<mscorlib::System::Reflection::ParameterModifier>* modifiers);
		mscorlib::System::Reflection::PropertyInfo* GetPropertyImpl(mscorlib::System::String* name, mscorlib::System::Reflection::BindingFlags bindingAttr, mscorlib::System::Reflection::Binder* binder, mscorlib::System::Type* returnType, IL2CPP::Array<mscorlib::System::Type*>* types, IL2CPP::Array<mscorlib::System::Reflection::ParameterModifier>* modifiers);
		mscorlib::System::Reflection::EventInfo* GetEvent(mscorlib::System::String* name, mscorlib::System::Reflection::BindingFlags bindingAttr);
		mscorlib::System::Reflection::FieldInfo* GetField(mscorlib::System::String* name, mscorlib::System::Reflection::BindingFlags bindingAttr);
		mscorlib::System::Type* GetNestedType(mscorlib::System::String* fullname, mscorlib::System::Reflection::BindingFlags bindingAttr);
		IL2CPP::Array<mscorlib::System::Reflection::MemberInfo*>* GetMember(mscorlib::System::String* name, mscorlib::System::Reflection::MemberTypes type, mscorlib::System::Reflection::BindingFlags bindingAttr);
		mscorlib::System::Reflection::Module* get_Module();
		mscorlib::System::Reflection::RuntimeModule* GetRuntimeModule();
		mscorlib::System::Reflection::Assembly* get_Assembly();
		mscorlib::System::Reflection::RuntimeAssembly* GetRuntimeAssembly();
		mscorlib::System::RuntimeTypeHandle get_TypeHandle();
		bool IsInstanceOfType(mscorlib::System::Object* o);
		bool IsSubclassOf(mscorlib::System::Type* type);
		bool IsAssignableFrom(mscorlib::System::Type* c);
		bool IsEquivalentTo(mscorlib::System::Type* other);
		mscorlib::System::Type* get_BaseType();
		mscorlib::System::RuntimeType* GetBaseType();
		mscorlib::System::Type* get_UnderlyingSystemType();
		mscorlib::System::Reflection::TypeAttributes GetAttributeFlagsImpl();
		bool IsContextfulImpl();
		bool IsByRefImpl();
		bool IsPrimitiveImpl();
		bool IsPointerImpl();
		bool IsCOMObjectImpl();
		bool IsValueTypeImpl();
		bool get_IsEnum();
		bool HasElementTypeImpl();
		mscorlib::System::Reflection::GenericParameterAttributes get_GenericParameterAttributes();
		bool get_IsSzArray();
		bool IsArrayImpl();
		int32_t GetArrayRank();
		mscorlib::System::Type* GetElementType();
		IL2CPP::Array<mscorlib::System::String*>* GetEnumNames();
		mscorlib::System::Array* GetEnumValues();
		mscorlib::System::Type* GetEnumUnderlyingType();
		bool IsEnumDefined(mscorlib::System::Object* value);
		mscorlib::System::String* GetEnumName(mscorlib::System::Object* value);
		IL2CPP::Array<mscorlib::System::RuntimeType*>* GetGenericArgumentsInternal();
		IL2CPP::Array<mscorlib::System::Type*>* GetGenericArguments();
		mscorlib::System::Type* MakeGenericType(IL2CPP::Array<mscorlib::System::Type*>* instantiation);
		bool get_IsGenericTypeDefinition();
		bool get_IsGenericParameter();
		int32_t get_GenericParameterPosition();
		mscorlib::System::Type* GetGenericTypeDefinition();
		bool get_IsGenericType();
		mscorlib::System::Object* InvokeMember(mscorlib::System::String* name, mscorlib::System::Reflection::BindingFlags bindingFlags, mscorlib::System::Reflection::Binder* binder, mscorlib::System::Object* target, IL2CPP::Array<mscorlib::System::Object*>* providedArgs, IL2CPP::Array<mscorlib::System::Reflection::ParameterModifier>* modifiers, mscorlib::System::Globalization::CultureInfo* culture, IL2CPP::Array<mscorlib::System::String*>* namedParams);
		bool Equals(mscorlib::System::Object* obj);
		static bool op_Equality(mscorlib::System::RuntimeType* left, mscorlib::System::RuntimeType* right);
		static bool op_Inequality(mscorlib::System::RuntimeType* left, mscorlib::System::RuntimeType* right);
		mscorlib::System::Object* Clone();
		void GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context);
		IL2CPP::Array<mscorlib::System::Object*>* GetCustomAttributes(bool inherit);
		IL2CPP::Array<mscorlib::System::Object*>* GetCustomAttributes(mscorlib::System::Type* attributeType, bool inherit);
		bool IsDefined(mscorlib::System::Type* attributeType, bool inherit);
		mscorlib::System::Collections::Generic::IList_1<mscorlib::System::Reflection::CustomAttributeData>* GetCustomAttributesData();
		mscorlib::System::String* FormatTypeName(bool serialization);
		mscorlib::System::Reflection::MemberTypes get_MemberType();
		mscorlib::System::Type* get_ReflectedType();
		int32_t get_MetadataToken();
		void CreateInstanceCheckThis();
		mscorlib::System::Object* CreateInstanceImpl(mscorlib::System::Reflection::BindingFlags bindingAttr, mscorlib::System::Reflection::Binder* binder, IL2CPP::Array<mscorlib::System::Object*>* args, mscorlib::System::Globalization::CultureInfo* culture, IL2CPP::Array<mscorlib::System::Object*>* activationAttributes, mscorlib::System::Threading::StackCrawlMark& stackMark);
		mscorlib::System::Object* CreateInstanceDefaultCtor(bool publicOnly, bool skipCheckThis, bool fillCache, mscorlib::System::Threading::StackCrawlMark& stackMark);
		mscorlib::System::Reflection::MonoCMethod* GetDefaultConstructor();
		mscorlib::System::String* GetDefaultMemberName();
		mscorlib::System::Reflection::RuntimeConstructorInfo* GetSerializationCtor();
		mscorlib::System::Object* CreateInstanceSlow(bool publicOnly, bool skipCheckThis, bool fillCache, mscorlib::System::Threading::StackCrawlMark& stackMark);
		mscorlib::System::Object* CreateInstanceMono(bool nonPublic);
		mscorlib::System::Object* CheckValue(mscorlib::System::Object* value, mscorlib::System::Reflection::Binder* binder, mscorlib::System::Globalization::CultureInfo* culture, mscorlib::System::Reflection::BindingFlags invokeAttr);
		mscorlib::System::Object* TryConvertToType(mscorlib::System::Object* value, bool& failed);
		static mscorlib::System::Object* IsConvertibleToPrimitiveType(mscorlib::System::Object* value, mscorlib::System::Type* targetType);
		mscorlib::System::String* GetCachedName(mscorlib::System::TypeNameKind kind);
		mscorlib::System::Type* make_array_type(int32_t rank);
		mscorlib::System::Type* MakeArrayType();
		mscorlib::System::Type* MakeArrayType(int32_t rank);
		mscorlib::System::Type* make_byref_type();
		mscorlib::System::Type* MakeByRefType();
		static mscorlib::System::Type* MakePointerType(mscorlib::System::Type* type);
		mscorlib::System::Type* MakePointerType();
		bool get_ContainsGenericParameters();
		IL2CPP::Array<mscorlib::System::Type*>* GetGenericParameterConstraints();
		static mscorlib::System::Object* CreateInstanceForAnotherGenericParameter(mscorlib::System::Type* genericType, mscorlib::System::RuntimeType* genericArgument);
		static mscorlib::System::Type* MakeGenericType(mscorlib::System::Type* gt, IL2CPP::Array<mscorlib::System::Type*>* types);
		intptr_t GetMethodsByName_native(intptr_t namePtr, mscorlib::System::Reflection::BindingFlags bindingAttr, bool ignoreCase);
		IL2CPP::Array<mscorlib::System::Reflection::RuntimeMethodInfo*>* GetMethodsByName(mscorlib::System::String* name, mscorlib::System::Reflection::BindingFlags bindingAttr, bool ignoreCase, mscorlib::System::RuntimeType* reflectedType);
		intptr_t GetPropertiesByName_native(intptr_t name, mscorlib::System::Reflection::BindingFlags bindingAttr, bool icase);
		intptr_t GetConstructors_native(mscorlib::System::Reflection::BindingFlags bindingAttr);
		IL2CPP::Array<mscorlib::System::Reflection::RuntimeConstructorInfo*>* GetConstructors_internal(mscorlib::System::Reflection::BindingFlags bindingAttr, mscorlib::System::RuntimeType* reflectedType);
		IL2CPP::Array<mscorlib::System::Reflection::RuntimePropertyInfo*>* GetPropertiesByName(mscorlib::System::String* name, mscorlib::System::Reflection::BindingFlags bindingAttr, bool icase, mscorlib::System::RuntimeType* reflectedType);
		mscorlib::System::Guid get_GUID();
		mscorlib::System::TypeCode GetTypeCodeImpl();
		static mscorlib::System::TypeCode GetTypeCodeImplInternal(mscorlib::System::Type* type);
		mscorlib::System::String* ToString();
		bool IsGenericCOMObjectImpl();
		static mscorlib::System::Object* CreateInstanceInternal(mscorlib::System::Type* type);
		mscorlib::System::Reflection::MethodBase* get_DeclaringMethod();
		mscorlib::System::String* getFullName(bool full_name, bool assembly_qualified);
		IL2CPP::Array<mscorlib::System::Type*>* GetGenericArgumentsInternal(bool runtimeArray);
		mscorlib::System::Reflection::GenericParameterAttributes GetGenericParameterAttributes();
		int32_t GetGenericParameterPosition();
		intptr_t GetEvents_native(intptr_t name, mscorlib::System::Reflection::BindingFlags bindingAttr);
		intptr_t GetFields_native(intptr_t name, mscorlib::System::Reflection::BindingFlags bindingAttr);
		IL2CPP::Array<mscorlib::System::Reflection::RuntimeFieldInfo*>* GetFields_internal(mscorlib::System::String* name, mscorlib::System::Reflection::BindingFlags bindingAttr, mscorlib::System::RuntimeType* reflectedType);
		IL2CPP::Array<mscorlib::System::Reflection::RuntimeEventInfo*>* GetEvents_internal(mscorlib::System::String* name, mscorlib::System::Reflection::BindingFlags bindingAttr, mscorlib::System::RuntimeType* reflectedType);
		IL2CPP::Array<mscorlib::System::Type*>* GetInterfaces();
		intptr_t GetNestedTypes_native(intptr_t name, mscorlib::System::Reflection::BindingFlags bindingAttr);
		IL2CPP::Array<mscorlib::System::RuntimeType*>* GetNestedTypes_internal(mscorlib::System::String* displayName, mscorlib::System::Reflection::BindingFlags bindingAttr);
		mscorlib::System::String* get_AssemblyQualifiedName();
		mscorlib::System::Type* get_DeclaringType();
		mscorlib::System::String* get_Name();
		mscorlib::System::String* get_Namespace();
		int32_t GetHashCode();
		mscorlib::System::String* get_FullName();
		static void _cctor();
	};
	bool operator==(mscorlib::System::RuntimeType& left, mscorlib::System::RuntimeType& right);
	bool operator!=(mscorlib::System::RuntimeType& left, mscorlib::System::RuntimeType& right);
}

