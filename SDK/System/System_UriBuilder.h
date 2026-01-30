#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace System::System { struct Uri; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };

namespace System::System
{
	struct UriBuilder : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool _changed;
		mscorlib::System::String* _fragment;
		mscorlib::System::String* _host;
		mscorlib::System::String* _password;
		mscorlib::System::String* _path;
		int32_t _port;
		mscorlib::System::String* _query;
		mscorlib::System::String* _scheme;
		mscorlib::System::String* _schemeDelimiter;
		System::Uri* _uri;
		mscorlib::System::String* _username;
		void _ctor();
		void _ctor(System::Uri* uri);
		void Init(System::Uri* uri);
		void _ctor(mscorlib::System::String* schemeName, mscorlib::System::String* hostName);
		void _ctor(mscorlib::System::String* scheme, mscorlib::System::String* host, int32_t portNumber);
		void _ctor(mscorlib::System::String* scheme, mscorlib::System::String* host, int32_t port, mscorlib::System::String* pathValue);
		void _ctor(mscorlib::System::String* scheme, mscorlib::System::String* host, int32_t port, mscorlib::System::String* path, mscorlib::System::String* extraValue);
		void set_Extra(mscorlib::System::String* value);
		void set_Fragment(mscorlib::System::String* value);
		void set_Host(mscorlib::System::String* value);
		mscorlib::System::String* get_Path();
		void set_Path(mscorlib::System::String* value);
		void set_Port(int32_t value);
		void set_Query(mscorlib::System::String* value);
		void set_Scheme(mscorlib::System::String* value);
		System::Uri* get_Uri();
		bool Equals(mscorlib::System::Object* rparam);
		int32_t GetHashCode();
		void SetFieldsFromUri(System::Uri* uri);
		mscorlib::System::String* ToString();
	};
}

