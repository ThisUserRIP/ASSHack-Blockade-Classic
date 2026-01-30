#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_TimeSpan.h"
namespace mscorlib::System { struct TimeSpan; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace Assembly_CSharp::BestHTTP::SocketIO
{
	struct HandshakeData : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* _Sid_k__BackingField;
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* _Upgrades_k__BackingField;
		mscorlib::System::TimeSpan _PingInterval_k__BackingField;
		mscorlib::System::TimeSpan _PingTimeout_k__BackingField;
		mscorlib::System::String* get_Sid();
		void set_Sid(mscorlib::System::String* value);
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* get_Upgrades();
		void set_Upgrades(mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* value);
		mscorlib::System::TimeSpan get_PingInterval();
		void set_PingInterval(mscorlib::System::TimeSpan value);
		mscorlib::System::TimeSpan get_PingTimeout();
		void set_PingTimeout(mscorlib::System::TimeSpan value);
		bool Parse(mscorlib::System::String* str);
		static mscorlib::System::Object* Get(mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Object>* from, mscorlib::System::String* key);
		static mscorlib::System::String* GetString(mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Object>* from, mscorlib::System::String* key);
		static mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* GetStringList(mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Object>* from, mscorlib::System::String* key);
		static int32_t GetInt(mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Object>* from, mscorlib::System::String* key);
		void _ctor();
	};
}

