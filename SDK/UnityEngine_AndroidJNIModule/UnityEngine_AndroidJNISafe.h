#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
namespace mscorlib::System { struct String; };
#include "UnityEngine_jvalue.h"
namespace UnityEngine_AndroidJNIModule::UnityEngine { struct jvalue; };
#include "..\mscorlib\System_Char.h"
namespace mscorlib::System { struct Char; };
#include "..\mscorlib\System_Double.h"
namespace mscorlib::System { struct Double; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "..\mscorlib\System_Int16.h"
namespace mscorlib::System { struct Int16; };
#include "..\mscorlib\System_SByte.h"
namespace mscorlib::System { struct SByte; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };

namespace UnityEngine_AndroidJNIModule::UnityEngine
{
	struct AndroidJNISafe : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static void CheckException();
		static void DeleteGlobalRef(intptr_t globalref);
		static void DeleteWeakGlobalRef(intptr_t globalref);
		static void DeleteLocalRef(intptr_t localref);
		static intptr_t NewString(mscorlib::System::String* chars);
		static mscorlib::System::String* GetStringChars(intptr_t str);
		static intptr_t GetObjectClass(intptr_t ptr);
		static intptr_t GetStaticMethodID(intptr_t clazz, mscorlib::System::String* name, mscorlib::System::String* sig);
		static intptr_t GetMethodID(intptr_t obj, mscorlib::System::String* name, mscorlib::System::String* sig);
		static intptr_t GetFieldID(intptr_t clazz, mscorlib::System::String* name, mscorlib::System::String* sig);
		static intptr_t GetStaticFieldID(intptr_t clazz, mscorlib::System::String* name, mscorlib::System::String* sig);
		static intptr_t FromReflectedMethod(intptr_t refMethod);
		static intptr_t FindClass(mscorlib::System::String* name);
		static intptr_t NewObject(intptr_t clazz, intptr_t methodID, IL2CPP::Array<UnityEngine_AndroidJNIModule::UnityEngine::jvalue>* args);
		static void CallStaticVoidMethod(intptr_t clazz, intptr_t methodID, IL2CPP::Array<UnityEngine_AndroidJNIModule::UnityEngine::jvalue>* args);
		static intptr_t CallStaticObjectMethod(intptr_t clazz, intptr_t methodID, IL2CPP::Array<UnityEngine_AndroidJNIModule::UnityEngine::jvalue>* args);
		static mscorlib::System::String* CallStaticStringMethod(intptr_t clazz, intptr_t methodID, IL2CPP::Array<UnityEngine_AndroidJNIModule::UnityEngine::jvalue>* args);
		static wchar_t CallStaticCharMethod(intptr_t clazz, intptr_t methodID, IL2CPP::Array<UnityEngine_AndroidJNIModule::UnityEngine::jvalue>* args);
		static double CallStaticDoubleMethod(intptr_t clazz, intptr_t methodID, IL2CPP::Array<UnityEngine_AndroidJNIModule::UnityEngine::jvalue>* args);
		static float CallStaticFloatMethod(intptr_t clazz, intptr_t methodID, IL2CPP::Array<UnityEngine_AndroidJNIModule::UnityEngine::jvalue>* args);
		static int64_t CallStaticLongMethod(intptr_t clazz, intptr_t methodID, IL2CPP::Array<UnityEngine_AndroidJNIModule::UnityEngine::jvalue>* args);
		static int16_t CallStaticShortMethod(intptr_t clazz, intptr_t methodID, IL2CPP::Array<UnityEngine_AndroidJNIModule::UnityEngine::jvalue>* args);
		static int8_t CallStaticSByteMethod(intptr_t clazz, intptr_t methodID, IL2CPP::Array<UnityEngine_AndroidJNIModule::UnityEngine::jvalue>* args);
		static bool CallStaticBooleanMethod(intptr_t clazz, intptr_t methodID, IL2CPP::Array<UnityEngine_AndroidJNIModule::UnityEngine::jvalue>* args);
		static int32_t CallStaticIntMethod(intptr_t clazz, intptr_t methodID, IL2CPP::Array<UnityEngine_AndroidJNIModule::UnityEngine::jvalue>* args);
		static void SetObjectField(intptr_t obj, intptr_t fieldID, intptr_t val);
		static void SetStringField(intptr_t obj, intptr_t fieldID, mscorlib::System::String* val);
		static void SetCharField(intptr_t obj, intptr_t fieldID, wchar_t val);
		static void SetDoubleField(intptr_t obj, intptr_t fieldID, double val);
		static void SetFloatField(intptr_t obj, intptr_t fieldID, float val);
		static void SetLongField(intptr_t obj, intptr_t fieldID, int64_t val);
		static void SetShortField(intptr_t obj, intptr_t fieldID, int16_t val);
		static void SetSByteField(intptr_t obj, intptr_t fieldID, int8_t val);
		static void SetBooleanField(intptr_t obj, intptr_t fieldID, bool val);
		static void SetIntField(intptr_t obj, intptr_t fieldID, int32_t val);
		static void CallVoidMethod(intptr_t obj, intptr_t methodID, IL2CPP::Array<UnityEngine_AndroidJNIModule::UnityEngine::jvalue>* args);
		static intptr_t CallObjectMethod(intptr_t obj, intptr_t methodID, IL2CPP::Array<UnityEngine_AndroidJNIModule::UnityEngine::jvalue>* args);
		static mscorlib::System::String* CallStringMethod(intptr_t obj, intptr_t methodID, IL2CPP::Array<UnityEngine_AndroidJNIModule::UnityEngine::jvalue>* args);
		static wchar_t CallCharMethod(intptr_t obj, intptr_t methodID, IL2CPP::Array<UnityEngine_AndroidJNIModule::UnityEngine::jvalue>* args);
		static double CallDoubleMethod(intptr_t obj, intptr_t methodID, IL2CPP::Array<UnityEngine_AndroidJNIModule::UnityEngine::jvalue>* args);
		static float CallFloatMethod(intptr_t obj, intptr_t methodID, IL2CPP::Array<UnityEngine_AndroidJNIModule::UnityEngine::jvalue>* args);
		static int64_t CallLongMethod(intptr_t obj, intptr_t methodID, IL2CPP::Array<UnityEngine_AndroidJNIModule::UnityEngine::jvalue>* args);
		static int16_t CallShortMethod(intptr_t obj, intptr_t methodID, IL2CPP::Array<UnityEngine_AndroidJNIModule::UnityEngine::jvalue>* args);
		static int8_t CallSByteMethod(intptr_t obj, intptr_t methodID, IL2CPP::Array<UnityEngine_AndroidJNIModule::UnityEngine::jvalue>* args);
		static bool CallBooleanMethod(intptr_t obj, intptr_t methodID, IL2CPP::Array<UnityEngine_AndroidJNIModule::UnityEngine::jvalue>* args);
		static int32_t CallIntMethod(intptr_t obj, intptr_t methodID, IL2CPP::Array<UnityEngine_AndroidJNIModule::UnityEngine::jvalue>* args);
		static IL2CPP::Array<wchar_t>* FromCharArray(intptr_t array);
		static IL2CPP::Array<double>* FromDoubleArray(intptr_t array);
		static IL2CPP::Array<float>* FromFloatArray(intptr_t array);
		static IL2CPP::Array<int64_t>* FromLongArray(intptr_t array);
		static IL2CPP::Array<int16_t>* FromShortArray(intptr_t array);
		static IL2CPP::Array<uint8_t>* FromByteArray(intptr_t array);
		static IL2CPP::Array<int8_t>* FromSByteArray(intptr_t array);
		static IL2CPP::Array<bool>* FromBooleanArray(intptr_t array);
		static IL2CPP::Array<int32_t>* FromIntArray(intptr_t array);
		static intptr_t ToObjectArray(IL2CPP::Array<intptr_t>* array, intptr_t type);
		static intptr_t ToCharArray(IL2CPP::Array<wchar_t>* array);
		static intptr_t ToDoubleArray(IL2CPP::Array<double>* array);
		static intptr_t ToFloatArray(IL2CPP::Array<float>* array);
		static intptr_t ToLongArray(IL2CPP::Array<int64_t>* array);
		static intptr_t ToShortArray(IL2CPP::Array<int16_t>* array);
		static intptr_t ToByteArray(IL2CPP::Array<uint8_t>* array);
		static intptr_t ToSByteArray(IL2CPP::Array<int8_t>* array);
		static intptr_t ToBooleanArray(IL2CPP::Array<bool>* array);
		static intptr_t ToIntArray(IL2CPP::Array<int32_t>* array);
		static intptr_t GetObjectArrayElement(intptr_t array, int32_t index);
		static int32_t GetArrayLength(intptr_t array);
	};
}

