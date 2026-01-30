#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Facebook_Unity_Example_ConsoleBase.h"
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IList_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Facebook::Unity::Example
{
	struct LogView : Assembly_CSharp::Facebook::Unity::Example::ConsoleBase
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::String* datePatt;
			mscorlib::System::Collections::Generic::IList_1<mscorlib::System::String>* events;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void AddLog(mscorlib::System::String* log);
		void OnGUI();
		void _ctor();
		static void _cctor();
	};
}

