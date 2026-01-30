#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Shop.h"
namespace Assembly_CSharp { struct Shop; };
namespace Facebook_Unity::Facebook::Unity { struct IPayResult; };
namespace Facebook_Unity::Facebook::Unity { template <typename T> struct FacebookDelegate_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp
{
	struct Shop___c : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			Assembly_CSharp::Shop___c* __9;
			Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IPayResult>* __9__33_0;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		void _ctor();
		void _DrawActiveItem_b__33_0(Facebook_Unity::Facebook::Unity::IPayResult* response);
	};
}

