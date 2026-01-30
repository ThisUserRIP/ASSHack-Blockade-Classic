#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "..\mscorlib\System_Reflection_MethodInfo.h"
#include "..\UnityEngine_CoreModule\UnityEngine_KeyCode.h"
namespace mscorlib::System { struct Enum; };
#include "..\mscorlib\System_Char.h"
namespace mscorlib::System { struct Char; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rect.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Rect; };
#include "..\mscorlib\System_Guid.h"
namespace mscorlib::System { struct Guid; };
#include "..\mscorlib\System_Int16.h"
namespace mscorlib::System { struct Int16; };
namespace mscorlib::System::Text { struct StringBuilder; };

namespace Rewired_Core::Rewired::Utils
{
	struct StringTools : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::String* yKMhJPkPbGHtvqHULoaXSgdOzom;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static mscorlib::System::String* ToString(IL2CPP::Array<int32_t>* inArray);
		static mscorlib::System::String* ToString(IL2CPP::Array<float>* inArray);
		static mscorlib::System::String* ToString(IL2CPP::Array<mscorlib::System::String*>* inArray);
		static mscorlib::System::String* ToString(IL2CPP::Array<bool>* inArray);
		static mscorlib::System::String* ToString(IL2CPP::Array<uint8_t>* inArray);
		static mscorlib::System::String* ToString(IL2CPP::Array<uint8_t>* inArray, mscorlib::System::String* stringOptions, int32_t maxItemsPerLine);
		static mscorlib::System::String* ToString(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* inArray);
		static mscorlib::System::String* ToString(mscorlib::System::Collections::Generic::List_1<mscorlib::System::Object>* list);
		static mscorlib::System::String* ToString(UnityEngine_CoreModule::UnityEngine::Vector2 v);
		static mscorlib::System::String* ToString(UnityEngine_CoreModule::UnityEngine::Vector3 v);
		template <typename T> static mscorlib::System::String* ToString(IL2CPP::Array<T>* inArray)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToString", std::vector<std::string> { GetGenericTypeName<T>() + (std::string)"[]" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)inArray;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (mscorlib::System::String*)returnValue;
		}
		template <typename T> static mscorlib::System::String* ToString(mscorlib::System::Collections::Generic::List_1<T>* inList)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToString", std::vector<std::string> { "System.Collections.Generic.List`1<T>" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)inList;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (mscorlib::System::String*)returnValue;
		}
		static IL2CPP::Array<mscorlib::System::String*>* Split(mscorlib::System::String* str, mscorlib::System::String* delimiter);
		static IL2CPP::Array<mscorlib::System::String*>* SplitAndTrim(mscorlib::System::String* str, mscorlib::System::String* delimiter);
		static mscorlib::System::String* DecodeNewlines(mscorlib::System::String* s);
		static mscorlib::System::String* EncodeNewlines(mscorlib::System::String* s);
		static mscorlib::System::String* ArrayToText(IL2CPP::Array<mscorlib::System::String*>* sA);
		static IL2CPP::Array<mscorlib::System::String*>* TextToArray(mscorlib::System::String* s);
		static mscorlib::System::String* StringToString(mscorlib::System::String* s);
		static int32_t StringToInt(mscorlib::System::String* s);
		static float StringToFloat(mscorlib::System::String* s);
		static bool StringToBoolean(mscorlib::System::String* s);
		static UnityEngine_CoreModule::UnityEngine::KeyCode StringToKeyCode(mscorlib::System::String* s);
		static mscorlib::System::Enum* StringToEnum(mscorlib::System::String* str, mscorlib::System::Type* type);
		static mscorlib::System::String* ToStringWithCount(mscorlib::System::String* s);
		static IL2CPP::Array<wchar_t>* StringToCharArray(mscorlib::System::String* s);
		static mscorlib::System::String* CharArrayToString(IL2CPP::Array<wchar_t>* c);
		static mscorlib::System::String* CSVEncode(mscorlib::System::String* s);
		static mscorlib::System::String* CSVDecode(mscorlib::System::String* s);
		static IL2CPP::Array<mscorlib::System::String*>* CSVToArray(mscorlib::System::String* s);
		template <typename TEnum> static bool TryParseEnum(mscorlib::System::String* value, TEnum& enumeration)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TryParseEnum", std::vector<std::string> { "System.String", GetGenericTypeName<TEnum>() + (std::string)"&" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = TEnum::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)value;
			params[1] = (intptr_t)&enumeration;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
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
		static mscorlib::System::String* TimeToString(int32_t seconds);
		static mscorlib::System::String* TimeToString(float seconds);
		static void _cctor();
		static mscorlib::System::String* CleanUpFileName(mscorlib::System::String* name);
		static mscorlib::System::String* StripTrailingNumbers(mscorlib::System::String* name);
		static mscorlib::System::String* StripTrailingNumbers(mscorlib::System::String* name, int32_t& number);
		static mscorlib::System::String* VerifyName(mscorlib::System::String* name, int32_t indexInNameList, IL2CPP::Array<mscorlib::System::String*>* names, bool cleanUpIllegalFileChars);
		static mscorlib::System::String* VerifyName(mscorlib::System::String* name, int32_t indexInNameList, IL2CPP::Array<mscorlib::System::String*>* names, bool cleanUpIllegalFileChars, bool allowBlank);
		static mscorlib::System::String* IterateName(mscorlib::System::String* name, int32_t indexInNameList, IL2CPP::Array<mscorlib::System::String*>* names);
		static mscorlib::System::String* ToString(UnityEngine_CoreModule::UnityEngine::Rect rect);
		static mscorlib::System::Guid ToGuid(mscorlib::System::String* guid);
		static IL2CPP::Array<uint8_t>* GetBytes(mscorlib::System::String* str);
		static mscorlib::System::String* GetString(IL2CPP::Array<uint8_t>* bytes);
		static mscorlib::System::String* ByteShiftEncode(mscorlib::System::String* source, int16_t shift);
		static mscorlib::System::String* GetNullTerminatedUnicodeString(IL2CPP::Array<uint8_t>* bytes);
		static mscorlib::System::String* SanitizeDeviceString(mscorlib::System::String* text);
		static mscorlib::System::String* ReplaceChar(mscorlib::System::String* string, int32_t index, wchar_t replacement);
		static mscorlib::System::String* AddSpacesToSentence(mscorlib::System::String* text, bool preserveAcronyms);
		static mscorlib::System::String* WriteVar(mscorlib::System::String* name, mscorlib::System::Object* value);
		static mscorlib::System::String* WriteVar(mscorlib::System::String* name, mscorlib::System::Object* value, wchar_t delimiter);
		static void WriteVar(mscorlib::System::Text::StringBuilder* sb, mscorlib::System::String* name, mscorlib::System::Object* value);
		static void WriteVar(mscorlib::System::Text::StringBuilder* sb, mscorlib::System::String* name, mscorlib::System::Object* value, wchar_t delimiter);
		static mscorlib::System::String* Trim(mscorlib::System::String* str);
		static mscorlib::System::String* VariableNameToDisplayName(mscorlib::System::String* fieldName);
		static int32_t CountChars(mscorlib::System::String* text, wchar_t character);
	};
}

