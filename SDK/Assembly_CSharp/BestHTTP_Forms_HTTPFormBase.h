#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Assembly_CSharp::BestHTTP::Forms { struct HTTPFieldData; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System::Text { struct Encoding; };
namespace Assembly_CSharp::BestHTTP { struct HTTPRequest; };

namespace Assembly_CSharp::BestHTTP::Forms
{
	struct HTTPFormBase : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::BestHTTP::Forms::HTTPFieldData>* _Fields_k__BackingField;
		bool _IsChanged_k__BackingField;
		bool _HasBinary_k__BackingField;
		bool _HasLongValue_k__BackingField;
		struct StaticFields
		{
			int32_t LongLength;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::BestHTTP::Forms::HTTPFieldData>* get_Fields();
		void set_Fields(mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::BestHTTP::Forms::HTTPFieldData>* value);
		bool get_IsEmpty();
		bool get_IsChanged();
		void set_IsChanged(bool value);
		bool get_HasBinary();
		void set_HasBinary(bool value);
		bool get_HasLongValue();
		void set_HasLongValue(bool value);
		void AddBinaryData(mscorlib::System::String* fieldName, IL2CPP::Array<uint8_t>* content);
		void AddBinaryData(mscorlib::System::String* fieldName, IL2CPP::Array<uint8_t>* content, mscorlib::System::String* fileName);
		void AddBinaryData(mscorlib::System::String* fieldName, IL2CPP::Array<uint8_t>* content, mscorlib::System::String* fileName, mscorlib::System::String* mimeType);
		void AddField(mscorlib::System::String* fieldName, mscorlib::System::String* value);
		void AddField(mscorlib::System::String* fieldName, mscorlib::System::String* value, mscorlib::System::Text::Encoding* e);
		void CopyFrom(Assembly_CSharp::BestHTTP::Forms::HTTPFormBase* fields);
		void PrepareRequest(Assembly_CSharp::BestHTTP::HTTPRequest* request);
		IL2CPP::Array<uint8_t>* GetData();
		void _ctor();
	};
}

