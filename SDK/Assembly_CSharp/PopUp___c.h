#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "PopUp.h"
namespace Assembly_CSharp { struct PopUp; };
namespace Facebook_Unity::Facebook::Unity { struct IPayResult; };
namespace Facebook_Unity::Facebook::Unity { template <typename T> struct FacebookDelegate_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp
{
	struct PopUp___c : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			Assembly_CSharp::PopUp___c* __9;
			Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IPayResult>* __9__17_0;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		void _ctor();
		void _DrawBuySeason_b__17_0(Facebook_Unity::Facebook::Unity::IPayResult* response);
	};
}

