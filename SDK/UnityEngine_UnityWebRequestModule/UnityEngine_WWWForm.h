#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Text { struct Encoding; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };

namespace UnityEngine_UnityWebRequestModule::UnityEngine
{
	struct WWWForm : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Generic::List_1<IL2CPP::Array<mscorlib::System::Byte>>* formData;
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* fieldNames;
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* fileNames;
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* types;
		IL2CPP::Array<uint8_t>* boundary;
		bool containsFiles;
		static mscorlib::System::Text::Encoding* get_DefaultEncoding();
		void _ctor();
		void AddField(mscorlib::System::String* fieldName, mscorlib::System::String* value);
		void AddField(mscorlib::System::String* fieldName, mscorlib::System::String* value, mscorlib::System::Text::Encoding* e);
		void AddField(mscorlib::System::String* fieldName, int32_t i);
		void AddBinaryData(mscorlib::System::String* fieldName, IL2CPP::Array<uint8_t>* contents);
		void AddBinaryData(mscorlib::System::String* fieldName, IL2CPP::Array<uint8_t>* contents, mscorlib::System::String* fileName);
		void AddBinaryData(mscorlib::System::String* fieldName, IL2CPP::Array<uint8_t>* contents, mscorlib::System::String* fileName, mscorlib::System::String* mimeType);
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::String>* get_headers();
		IL2CPP::Array<uint8_t>* get_data();
	};
}

