#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "UnityEngine_Quaternion.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Quaternion; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
#include "..\mscorlib\System_Reflection_MethodInfo.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace UnityEngine_CoreModule::UnityEngine { struct Object; };
#include "UnityEngine_HideFlags.h"

namespace UnityEngine_CoreModule::UnityEngine
{
	struct Object : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		intptr_t m_CachedPtr;
		struct StaticFields
		{
			int32_t OffsetOfInstanceIDInCPlusPlusObject;
			mscorlib::System::String* objectIsNullMessage;
			mscorlib::System::String* cloneDestroyedMessage;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		int32_t GetInstanceID();
		int32_t GetHashCode();
		bool Equals(mscorlib::System::Object* other);
		static bool op_Implicit(UnityEngine_CoreModule::UnityEngine::Object* exists);
		static bool CompareBaseObjects(UnityEngine_CoreModule::UnityEngine::Object* lhs, UnityEngine_CoreModule::UnityEngine::Object* rhs);
		static bool IsNativeObjectAlive(UnityEngine_CoreModule::UnityEngine::Object* o);
		intptr_t GetCachedPtr();
		mscorlib::System::String* get_name();
		void set_name(mscorlib::System::String* value);
		static UnityEngine_CoreModule::UnityEngine::Object* Instantiate(UnityEngine_CoreModule::UnityEngine::Object* original, UnityEngine_CoreModule::UnityEngine::Vector3 position, UnityEngine_CoreModule::UnityEngine::Quaternion rotation);
		static UnityEngine_CoreModule::UnityEngine::Object* Instantiate(UnityEngine_CoreModule::UnityEngine::Object* original, UnityEngine_CoreModule::UnityEngine::Vector3 position, UnityEngine_CoreModule::UnityEngine::Quaternion rotation, UnityEngine_CoreModule::UnityEngine::Transform* parent);
		static UnityEngine_CoreModule::UnityEngine::Object* Instantiate(UnityEngine_CoreModule::UnityEngine::Object* original);
		static UnityEngine_CoreModule::UnityEngine::Object* Instantiate(UnityEngine_CoreModule::UnityEngine::Object* original, UnityEngine_CoreModule::UnityEngine::Transform* parent, bool instantiateInWorldSpace);
		template <typename T> static T* Instantiate(T* original)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Instantiate", std::vector<std::string> { GetGenericTypeName<T>() });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)original;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return GetGenericValue<T>(returnValue);;
		}
		template <typename T> static T* Instantiate(T* original, UnityEngine_CoreModule::UnityEngine::Vector3 position, UnityEngine_CoreModule::UnityEngine::Quaternion rotation)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Instantiate", std::vector<std::string> { GetGenericTypeName<T>(), "UnityEngine.Vector3", "UnityEngine.Quaternion" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[3];
			params[0] = (intptr_t)original;
			params[1] = (intptr_t)&position;
			params[2] = (intptr_t)&rotation;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return GetGenericValue<T>(returnValue);;
		}
		template <typename T> static T* Instantiate(T* original, UnityEngine_CoreModule::UnityEngine::Vector3 position, UnityEngine_CoreModule::UnityEngine::Quaternion rotation, UnityEngine_CoreModule::UnityEngine::Transform* parent)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Instantiate", std::vector<std::string> { GetGenericTypeName<T>(), "UnityEngine.Vector3", "UnityEngine.Quaternion", "UnityEngine.Transform" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[4];
			params[0] = (intptr_t)original;
			params[1] = (intptr_t)&position;
			params[2] = (intptr_t)&rotation;
			params[3] = (intptr_t)parent;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return GetGenericValue<T>(returnValue);;
		}
		template <typename T> static T* Instantiate(T* original, UnityEngine_CoreModule::UnityEngine::Transform* parent)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Instantiate", std::vector<std::string> { GetGenericTypeName<T>(), "UnityEngine.Transform" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)original;
			params[1] = (intptr_t)parent;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return GetGenericValue<T>(returnValue);;
		}
		template <typename T> static T* Instantiate(T* original, UnityEngine_CoreModule::UnityEngine::Transform* parent, bool worldPositionStays)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Instantiate", std::vector<std::string> { GetGenericTypeName<T>(), "UnityEngine.Transform", "System.Boolean" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[3];
			params[0] = (intptr_t)original;
			params[1] = (intptr_t)parent;
			params[2] = (intptr_t)&worldPositionStays;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return GetGenericValue<T>(returnValue);;
		}
		static void Destroy(UnityEngine_CoreModule::UnityEngine::Object* obj, float t);
		static void Destroy(UnityEngine_CoreModule::UnityEngine::Object* obj);
		static void DestroyImmediate(UnityEngine_CoreModule::UnityEngine::Object* obj, bool allowDestroyingAssets);
		static void DestroyImmediate(UnityEngine_CoreModule::UnityEngine::Object* obj);
		static IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Object*>* FindObjectsOfType(mscorlib::System::Type* type);
		static IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Object*>* FindObjectsOfType(mscorlib::System::Type* type, bool includeInactive);
		static void DontDestroyOnLoad(UnityEngine_CoreModule::UnityEngine::Object* target);
		UnityEngine_CoreModule::UnityEngine::HideFlags get_hideFlags();
		void set_hideFlags(UnityEngine_CoreModule::UnityEngine::HideFlags value);
		static void DestroyObject(UnityEngine_CoreModule::UnityEngine::Object* obj, float t);
		template <typename T> static IL2CPP::Array<T>* FindObjectsOfType()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FindObjectsOfType");
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, nullptr, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
			return (IL2CPP::Array<T>*)returnValue;
		}
		template <typename T> static T* FindObjectOfType()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FindObjectOfType");
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, nullptr, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
			return GetGenericValue<T>(returnValue);;
		}
		static void CheckNullArgument(mscorlib::System::Object* arg, mscorlib::System::String* message);
		static UnityEngine_CoreModule::UnityEngine::Object* FindObjectOfType(mscorlib::System::Type* type);
		static UnityEngine_CoreModule::UnityEngine::Object* FindObjectOfType(mscorlib::System::Type* type, bool includeInactive);
		mscorlib::System::String* ToString();
		static bool op_Equality(UnityEngine_CoreModule::UnityEngine::Object* x, UnityEngine_CoreModule::UnityEngine::Object* y);
		static bool op_Inequality(UnityEngine_CoreModule::UnityEngine::Object* x, UnityEngine_CoreModule::UnityEngine::Object* y);
		static int32_t GetOffsetOfInstanceIDInCPlusPlusObject();
		static UnityEngine_CoreModule::UnityEngine::Object* Internal_CloneSingle(UnityEngine_CoreModule::UnityEngine::Object* data);
		static UnityEngine_CoreModule::UnityEngine::Object* Internal_CloneSingleWithParent(UnityEngine_CoreModule::UnityEngine::Object* data, UnityEngine_CoreModule::UnityEngine::Transform* parent, bool worldPositionStays);
		static UnityEngine_CoreModule::UnityEngine::Object* Internal_InstantiateSingle(UnityEngine_CoreModule::UnityEngine::Object* data, UnityEngine_CoreModule::UnityEngine::Vector3 pos, UnityEngine_CoreModule::UnityEngine::Quaternion rot);
		static UnityEngine_CoreModule::UnityEngine::Object* Internal_InstantiateSingleWithParent(UnityEngine_CoreModule::UnityEngine::Object* data, UnityEngine_CoreModule::UnityEngine::Transform* parent, UnityEngine_CoreModule::UnityEngine::Vector3 pos, UnityEngine_CoreModule::UnityEngine::Quaternion rot);
		static mscorlib::System::String* ToString(UnityEngine_CoreModule::UnityEngine::Object* obj);
		static mscorlib::System::String* GetName(UnityEngine_CoreModule::UnityEngine::Object* obj);
		static void SetName(UnityEngine_CoreModule::UnityEngine::Object* obj, mscorlib::System::String* name);
		static UnityEngine_CoreModule::UnityEngine::Object* FindObjectFromInstanceID(int32_t instanceID);
		void _ctor();
		static void _cctor();
		static UnityEngine_CoreModule::UnityEngine::Object* Internal_InstantiateSingle_Injected(UnityEngine_CoreModule::UnityEngine::Object* data, UnityEngine_CoreModule::UnityEngine::Vector3& pos, UnityEngine_CoreModule::UnityEngine::Quaternion& rot);
		static UnityEngine_CoreModule::UnityEngine::Object* Internal_InstantiateSingleWithParent_Injected(UnityEngine_CoreModule::UnityEngine::Object* data, UnityEngine_CoreModule::UnityEngine::Transform* parent, UnityEngine_CoreModule::UnityEngine::Vector3& pos, UnityEngine_CoreModule::UnityEngine::Quaternion& rot);
	};
	bool operator==(UnityEngine_CoreModule::UnityEngine::Object& x, UnityEngine_CoreModule::UnityEngine::Object& y);
	bool operator!=(UnityEngine_CoreModule::UnityEngine::Object& x, UnityEngine_CoreModule::UnityEngine::Object& y);
}

