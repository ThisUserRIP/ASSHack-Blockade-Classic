#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "BestHTTP_Logger_Loglevels.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Exception; };

namespace Assembly_CSharp::BestHTTP::Logger
{
	struct DefaultLogger : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::BestHTTP::Logger::Loglevels _Level_k__BackingField;
		mscorlib::System::String* _FormatVerbose_k__BackingField;
		mscorlib::System::String* _FormatInfo_k__BackingField;
		mscorlib::System::String* _FormatWarn_k__BackingField;
		mscorlib::System::String* _FormatErr_k__BackingField;
		mscorlib::System::String* _FormatEx_k__BackingField;
		Assembly_CSharp::BestHTTP::Logger::Loglevels get_Level();
		void set_Level(Assembly_CSharp::BestHTTP::Logger::Loglevels value);
		mscorlib::System::String* get_FormatVerbose();
		void set_FormatVerbose(mscorlib::System::String* value);
		mscorlib::System::String* get_FormatInfo();
		void set_FormatInfo(mscorlib::System::String* value);
		mscorlib::System::String* get_FormatWarn();
		void set_FormatWarn(mscorlib::System::String* value);
		mscorlib::System::String* get_FormatErr();
		void set_FormatErr(mscorlib::System::String* value);
		mscorlib::System::String* get_FormatEx();
		void set_FormatEx(mscorlib::System::String* value);
		void _ctor();
		void Verbose(mscorlib::System::String* division, mscorlib::System::String* verb);
		void Information(mscorlib::System::String* division, mscorlib::System::String* info);
		void Warning(mscorlib::System::String* division, mscorlib::System::String* warn);
		void Error(mscorlib::System::String* division, mscorlib::System::String* err);
		void Exception(mscorlib::System::String* division, mscorlib::System::String* msg, mscorlib::System::Exception* ex);
		mscorlib::System::String* GetFormattedTime();
	};
}

