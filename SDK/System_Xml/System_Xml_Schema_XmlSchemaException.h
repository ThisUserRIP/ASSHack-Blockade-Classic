#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_SystemException.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaObject; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Runtime::Serialization { struct SerializationInfo; };
#include "..\mscorlib\System_Runtime_Serialization_StreamingContext.h"
namespace mscorlib::System::Runtime::Serialization { struct StreamingContext; };
namespace mscorlib::System { struct Exception; };

namespace System_Xml::System::Xml::Schema
{
	struct XmlSchemaException : mscorlib::System::SystemException
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* res;
		IL2CPP::Array<mscorlib::System::String*>* args;
		mscorlib::System::String* sourceUri;
		int32_t lineNumber;
		int32_t linePosition;
		System_Xml::System::Xml::Schema::XmlSchemaObject* sourceSchemaObject;
		mscorlib::System::String* message;
		void _ctor(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context);
		void GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context);
		void _ctor();
		void _ctor(mscorlib::System::String* message);
		void _ctor(mscorlib::System::String* message, mscorlib::System::Exception* innerException);
		void _ctor(mscorlib::System::String* message, mscorlib::System::Exception* innerException, int32_t lineNumber, int32_t linePosition);
		void _ctor(mscorlib::System::String* res, IL2CPP::Array<mscorlib::System::String*>* args);
		void _ctor(mscorlib::System::String* res, mscorlib::System::String* arg);
		void _ctor(mscorlib::System::String* res, mscorlib::System::String* arg, mscorlib::System::String* sourceUri, int32_t lineNumber, int32_t linePosition);
		void _ctor(mscorlib::System::String* res, mscorlib::System::String* sourceUri, int32_t lineNumber, int32_t linePosition);
		void _ctor(mscorlib::System::String* res, IL2CPP::Array<mscorlib::System::String*>* args, mscorlib::System::String* sourceUri, int32_t lineNumber, int32_t linePosition);
		void _ctor(mscorlib::System::String* res, System_Xml::System::Xml::Schema::XmlSchemaObject* source);
		void _ctor(mscorlib::System::String* res, mscorlib::System::String* arg, System_Xml::System::Xml::Schema::XmlSchemaObject* source);
		void _ctor(mscorlib::System::String* res, IL2CPP::Array<mscorlib::System::String*>* args, System_Xml::System::Xml::Schema::XmlSchemaObject* source);
		void _ctor(mscorlib::System::String* res, IL2CPP::Array<mscorlib::System::String*>* args, mscorlib::System::Exception* innerException, mscorlib::System::String* sourceUri, int32_t lineNumber, int32_t linePosition, System_Xml::System::Xml::Schema::XmlSchemaObject* source);
		static mscorlib::System::String* CreateMessage(mscorlib::System::String* res, IL2CPP::Array<mscorlib::System::String*>* args);
		mscorlib::System::String* get_GetRes();
		IL2CPP::Array<mscorlib::System::String*>* get_Args();
		mscorlib::System::String* get_SourceUri();
		int32_t get_LineNumber();
		int32_t get_LinePosition();
		System_Xml::System::Xml::Schema::XmlSchemaObject* get_SourceSchemaObject();
		void SetSource(mscorlib::System::String* sourceUri, int32_t lineNumber, int32_t linePosition);
		void SetSchemaObject(System_Xml::System::Xml::Schema::XmlSchemaObject* source);
		void SetSource(System_Xml::System::Xml::Schema::XmlSchemaObject* source);
		mscorlib::System::String* get_Message();
	};
}

