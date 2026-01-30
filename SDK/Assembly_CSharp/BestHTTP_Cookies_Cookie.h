#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_DateTime.h"
namespace mscorlib::System { struct DateTime; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System::System { struct Uri; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
namespace mscorlib::System::IO { struct BinaryWriter; };
namespace mscorlib::System::IO { struct BinaryReader; };
namespace mscorlib::System { struct Object; };
namespace Assembly_CSharp::BestHTTP::Extensions { struct HeaderValue; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };

namespace Assembly_CSharp::BestHTTP::Cookies
{
	struct Cookie : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* _Name_k__BackingField;
		mscorlib::System::String* _Value_k__BackingField;
		mscorlib::System::DateTime _Date_k__BackingField;
		mscorlib::System::DateTime _LastAccess_k__BackingField;
		mscorlib::System::DateTime _Expires_k__BackingField;
		int64_t _MaxAge_k__BackingField;
		bool _IsSession_k__BackingField;
		mscorlib::System::String* _Domain_k__BackingField;
		mscorlib::System::String* _Path_k__BackingField;
		bool _IsSecure_k__BackingField;
		bool _IsHttpOnly_k__BackingField;
		struct StaticFields
		{
			int32_t Version;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		mscorlib::System::String* get_Name();
		void set_Name(mscorlib::System::String* value);
		mscorlib::System::String* get_Value();
		void set_Value(mscorlib::System::String* value);
		mscorlib::System::DateTime get_Date();
		void set_Date(mscorlib::System::DateTime value);
		mscorlib::System::DateTime get_LastAccess();
		void set_LastAccess(mscorlib::System::DateTime value);
		mscorlib::System::DateTime get_Expires();
		void set_Expires(mscorlib::System::DateTime value);
		int64_t get_MaxAge();
		void set_MaxAge(int64_t value);
		bool get_IsSession();
		void set_IsSession(bool value);
		mscorlib::System::String* get_Domain();
		void set_Domain(mscorlib::System::String* value);
		mscorlib::System::String* get_Path();
		void set_Path(mscorlib::System::String* value);
		bool get_IsSecure();
		void set_IsSecure(bool value);
		bool get_IsHttpOnly();
		void set_IsHttpOnly(bool value);
		void _ctor(mscorlib::System::String* name, mscorlib::System::String* value);
		void _ctor(mscorlib::System::String* name, mscorlib::System::String* value, mscorlib::System::String* path);
		void _ctor(mscorlib::System::String* name, mscorlib::System::String* value, mscorlib::System::String* path, mscorlib::System::String* domain);
		void _ctor(System::System::Uri* uri, mscorlib::System::String* name, mscorlib::System::String* value, mscorlib::System::DateTime expires, bool isSession);
		void _ctor(System::System::Uri* uri, mscorlib::System::String* name, mscorlib::System::String* value, int64_t maxAge, bool isSession);
		void _ctor();
		bool WillExpireInTheFuture();
		uint32_t GuessSize();
		static Assembly_CSharp::BestHTTP::Cookies::Cookie* Parse(mscorlib::System::String* header, System::System::Uri* defaultDomain);
		void SaveTo(mscorlib::System::IO::BinaryWriter* stream);
		void LoadFrom(mscorlib::System::IO::BinaryReader* stream);
		mscorlib::System::String* ToString();
		bool Equals(mscorlib::System::Object* obj);
		bool Equals(Assembly_CSharp::BestHTTP::Cookies::Cookie* cookie);
		int32_t GetHashCode();
		static mscorlib::System::String* ReadValue(mscorlib::System::String* str, int32_t& pos);
		static mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::BestHTTP::Extensions::HeaderValue>* ParseCookieHeader(mscorlib::System::String* str);
		int32_t CompareTo(Assembly_CSharp::BestHTTP::Cookies::Cookie* other);
	};
}

