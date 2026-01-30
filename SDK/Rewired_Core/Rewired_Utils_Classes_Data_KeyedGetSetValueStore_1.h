#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Reflection_MethodInfo.h"
namespace Rewired_Core::Rewired::Utils::Interfaces { template <typename T> struct IGetSetValue_1; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct ICollection_1; };
#include "..\mscorlib\System_Collections_Generic_KeyValuePair_2.h"
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct KeyValuePair_2; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IEnumerator_1; };
namespace mscorlib::System::Collections { struct IEnumerator; };

namespace Rewired_Core::Rewired::Utils::Classes::Data
{
	template <typename TKey> struct KeyedGetSetValueStore_1 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass()
		{
			IL2CPP::Array<mscorlib::System::Type*>* arrayType = new IL2CPP::Array<mscorlib::System::Type*>();
			arrayType->max_length = 1;
			arrayType->vector[0] = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(TKey::GetIl2CppClass()));
			intptr_t handle = ((intptr_t)il2cpp_class_get_type(GetIL2CppClass("Rewired_Core.dll", "Rewired.Utils.Classes.Data", "KeyedGetSetValueStore`1")));
			const IL2CPP::Il2CppType* Il2CppType = (const IL2CPP::Il2CppType*)(mscorlib::System::Type::internal_from_handle(handle)->MakeGenericType(arrayType)->get_TypeHandle().value);
			IL2CPP::Il2CppClass* il2cppclass = il2cpp_class_from_type(Il2CppType);
			return il2cppclass;
		}
		static mscorlib::System::Type* GetIl2CppType()
		{
			static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
			return il2cpptype;
		}
		mscorlib::System::Collections::Generic::Dictionary_2<TKey, mscorlib::System::Object>* bCzaxLPNgpeLaGPzSeDuOKFMdnmj;
		bool EgREtdRyDzdTHhVcHugXpEuWLRD;
		int32_t get_Count()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Count");
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
			if (returnValue == nullptr)
			{
				int32_t ret;
				std::memset(&ret, 0, sizeof(int32_t));
				return ret;
			}
			return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
		}
		bool get_isReadOnlyCollection()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_isReadOnlyCollection");
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
			if (returnValue == nullptr)
			{
				bool ret;
				std::memset(&ret, 0, sizeof(bool));
				return ret;
			}
			return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
		}
		void _ctor(mscorlib::System::Collections::Generic::Dictionary_2<TKey, mscorlib::System::Object>* valueDelegates, bool isReadOnlyCollection)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Collections.Generic.Dictionary`2<TKey,System.Object>", "System.Boolean" });
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)valueDelegates;
			params[1] = (intptr_t)&isReadOnlyCollection;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		void _ctor(bool isReadOnlyCollection)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Boolean" });
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)&isReadOnlyCollection;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		template <typename TValue> void AddItem(TKey* key, Rewired_Core::Rewired::Utils::Interfaces::IGetSetValue_1<TValue>* item)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddItem", std::vector<std::string> { GetGenericTypeName<TKey>(), "Rewired.Utils.Interfaces.IGetSetValue`1<TValue>" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = TValue::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)key;
			params[1] = (intptr_t)item;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		template <typename TValue> Rewired_Core::Rewired::Utils::Interfaces::IGetSetValue_1<TValue>* GetItem(TKey* key)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetItem", std::vector<std::string> { GetGenericTypeName<TKey>() });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = TValue::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)key;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (Rewired_Core::Rewired::Utils::Interfaces::IGetSetValue_1<TValue>*)returnValue;
		}
		template <typename TValue> bool RemoveItem(TKey* key)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RemoveItem", std::vector<std::string> { GetGenericTypeName<TKey>() });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = TValue::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)key;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			if (returnValue == nullptr)
			{
				bool ret;
				std::memset(&ret, 0, sizeof(bool));
				return ret;
			}
			return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
		}
		bool ContainsKey(TKey* key)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ContainsKey", std::vector<std::string> { GetGenericTypeName<TKey>() });
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)key;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			if (returnValue == nullptr)
			{
				bool ret;
				std::memset(&ret, 0, sizeof(bool));
				return ret;
			}
			return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
		}
		void Clear()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Clear");
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
		}
		template <typename TValue> bool ContainsValue(TKey* key)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ContainsValue", std::vector<std::string> { GetGenericTypeName<TKey>() });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = TValue::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)key;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			if (returnValue == nullptr)
			{
				bool ret;
				std::memset(&ret, 0, sizeof(bool));
				return ret;
			}
			return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
		}
		template <typename TValue> TValue* GetValue(TKey* key)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetValue", std::vector<std::string> { GetGenericTypeName<TKey>() });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = TValue::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)key;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return GetGenericValue<TValue>(returnValue);;
		}
		template <typename TValue> void SetValue(TKey* key, TValue* value)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetValue", std::vector<std::string> { GetGenericTypeName<TKey>(), GetGenericTypeName<TValue>() });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = TValue::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)key;
			params[1] = (intptr_t)value;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		template <typename TValue> bool TryGetValue(TKey* key, TValue& value)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TryGetValue", std::vector<std::string> { GetGenericTypeName<TKey>(), GetGenericTypeName<TValue>() + (std::string)"&" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = TValue::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)key;
			params[1] = (intptr_t)&value;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			if (returnValue == nullptr)
			{
				bool ret;
				std::memset(&ret, 0, sizeof(bool));
				return ret;
			}
			return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
		}
		template <typename TValue> bool TrySetValue(TKey* key, TValue* value)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TrySetValue", std::vector<std::string> { GetGenericTypeName<TKey>(), GetGenericTypeName<TValue>() });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = TValue::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)key;
			params[1] = (intptr_t)value;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			if (returnValue == nullptr)
			{
				bool ret;
				std::memset(&ret, 0, sizeof(bool));
				return ret;
			}
			return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
		}
		void XKULHDRqoVicIiiQfnsWMAmrQHN()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "XKULHDRqoVicIiiQfnsWMAmrQHN");
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
		}
		static void NIsLbhCrFqKfvZMyvJffyfqdHLS(TKey* A_0, mscorlib::System::Type* A_1)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "NIsLbhCrFqKfvZMyvJffyfqdHLS");
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)A_0;
			params[1] = (intptr_t)A_1;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		static mscorlib::System::String* iSDkIRgoXiPVySfaLdkBlpTaAOA(TKey* A_0, mscorlib::System::Type* A_1)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "iSDkIRgoXiPVySfaLdkBlpTaAOA");
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)A_0;
			params[1] = (intptr_t)A_1;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (mscorlib::System::String*)returnValue;
		}
		void System_Collections_Generic_IDictionary_TKey_System_Object__Add(TKey* key, mscorlib::System::Object* value)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "System.Collections.Generic.IDictionary<TKey,System.Object>.Add", std::vector<std::string> { GetGenericTypeName<TKey>(), "System.Object" });
			const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)key;
			params[1] = (intptr_t)value;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		bool System_Collections_Generic_IDictionary_TKey_System_Object__ContainsKey(TKey* key)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "System.Collections.Generic.IDictionary<TKey,System.Object>.ContainsKey", std::vector<std::string> { GetGenericTypeName<TKey>() });
			const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)key;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			if (returnValue == nullptr)
			{
				bool ret;
				std::memset(&ret, 0, sizeof(bool));
				return ret;
			}
			return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
		}
		mscorlib::System::Collections::Generic::ICollection_1<TKey>* System_Collections_Generic_IDictionary_TKey_System_Object__get_Keys()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "System.Collections.Generic.IDictionary<TKey,System.Object>.get_Keys");
			const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
			return (mscorlib::System::Collections::Generic::ICollection_1<TKey>*)returnValue;
		}
		bool System_Collections_Generic_IDictionary_TKey_System_Object__Remove(TKey* key)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "System.Collections.Generic.IDictionary<TKey,System.Object>.Remove", std::vector<std::string> { GetGenericTypeName<TKey>() });
			const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)key;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			if (returnValue == nullptr)
			{
				bool ret;
				std::memset(&ret, 0, sizeof(bool));
				return ret;
			}
			return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
		}
		bool System_Collections_Generic_IDictionary_TKey_System_Object__TryGetValue(TKey* key, mscorlib::System::Object& value)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "System.Collections.Generic.IDictionary<TKey,System.Object>.TryGetValue", std::vector<std::string> { GetGenericTypeName<TKey>(), "System.Object&" });
			const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)key;
			params[1] = (intptr_t)&value;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			if (returnValue == nullptr)
			{
				bool ret;
				std::memset(&ret, 0, sizeof(bool));
				return ret;
			}
			return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
		}
		mscorlib::System::Collections::Generic::ICollection_1<mscorlib::System::Object>* System_Collections_Generic_IDictionary_TKey_System_Object__get_Values()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "System.Collections.Generic.IDictionary<TKey,System.Object>.get_Values");
			const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
			return (mscorlib::System::Collections::Generic::ICollection_1<mscorlib::System::Object>*)returnValue;
		}
		mscorlib::System::Object* System_Collections_Generic_IDictionary_TKey_System_Object__get_Item(TKey* key)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "System.Collections.Generic.IDictionary<TKey,System.Object>.get_Item", std::vector<std::string> { GetGenericTypeName<TKey>() });
			const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)key;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (mscorlib::System::Object*)returnValue;
		}
		void System_Collections_Generic_IDictionary_TKey_System_Object__set_Item(TKey* key, mscorlib::System::Object* value)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "System.Collections.Generic.IDictionary<TKey,System.Object>.set_Item", std::vector<std::string> { GetGenericTypeName<TKey>(), "System.Object" });
			const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)key;
			params[1] = (intptr_t)value;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		void System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_System_Object___Add(mscorlib::System::Collections::Generic::KeyValuePair_2<TKey, mscorlib::System::Object> item)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,System.Object>>.Add", std::vector<std::string> { "System.Collections.Generic.KeyValuePair`2<TKey,System.Object>" });
			const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)&item;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		void System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_System_Object___Clear()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,System.Object>>.Clear");
			const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
		}
		bool System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_System_Object___Contains(mscorlib::System::Collections::Generic::KeyValuePair_2<TKey, mscorlib::System::Object> item)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,System.Object>>.Contains", std::vector<std::string> { "System.Collections.Generic.KeyValuePair`2<TKey,System.Object>" });
			const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)&item;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			if (returnValue == nullptr)
			{
				bool ret;
				std::memset(&ret, 0, sizeof(bool));
				return ret;
			}
			return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
		}
		void System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_System_Object___CopyTo(IL2CPP::Array<mscorlib::System::Collections::Generic::KeyValuePair_2<TKey, mscorlib::System::Object>>* array, int32_t arrayIndex)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,System.Object>>.CopyTo", std::vector<std::string> { "System.Collections.Generic.KeyValuePair`2<TKey,System.Object>[]", "System.Int32" });
			const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)array;
			params[1] = (intptr_t)&arrayIndex;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		int32_t System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_System_Object___get_Count()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,System.Object>>.get_Count");
			const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
			if (returnValue == nullptr)
			{
				int32_t ret;
				std::memset(&ret, 0, sizeof(int32_t));
				return ret;
			}
			return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
		}
		bool System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_System_Object___get_IsReadOnly()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,System.Object>>.get_IsReadOnly");
			const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
			if (returnValue == nullptr)
			{
				bool ret;
				std::memset(&ret, 0, sizeof(bool));
				return ret;
			}
			return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
		}
		bool System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_System_Object___Remove(mscorlib::System::Collections::Generic::KeyValuePair_2<TKey, mscorlib::System::Object> item)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,System.Object>>.Remove", std::vector<std::string> { "System.Collections.Generic.KeyValuePair`2<TKey,System.Object>" });
			const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)&item;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			if (returnValue == nullptr)
			{
				bool ret;
				std::memset(&ret, 0, sizeof(bool));
				return ret;
			}
			return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
		}
		mscorlib::System::Collections::Generic::IEnumerator_1<mscorlib::System::Collections::Generic::KeyValuePair_2<TKey, mscorlib::System::Object>>* System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_TKey_System_Object___GetEnumerator()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,System.Object>>.GetEnumerator");
			const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
			return (mscorlib::System::Collections::Generic::IEnumerator_1<mscorlib::System::Collections::Generic::KeyValuePair_2<TKey, mscorlib::System::Object>>*)returnValue;
		}
		mscorlib::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "System.Collections.IEnumerable.GetEnumerator");
			const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
			return (mscorlib::System::Collections::IEnumerator*)returnValue;
		}
	};
}

