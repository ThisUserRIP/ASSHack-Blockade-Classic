#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_TimeSpan.h"
namespace mscorlib::System { struct TimeSpan; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::BestHTTP::ServerSentEvents
{
	struct Message : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* _Id_k__BackingField;
		mscorlib::System::String* _Event_k__BackingField;
		mscorlib::System::String* _Data_k__BackingField;
		mscorlib::System::TimeSpan _Retry_k__BackingField;
		mscorlib::System::String* get_Id();
		void set_Id(mscorlib::System::String* value);
		mscorlib::System::String* get_Event();
		void set_Event(mscorlib::System::String* value);
		mscorlib::System::String* get_Data();
		void set_Data(mscorlib::System::String* value);
		mscorlib::System::TimeSpan get_Retry();
		void set_Retry(mscorlib::System::TimeSpan value);
		mscorlib::System::String* ToString();
		void _ctor();
	};
}

