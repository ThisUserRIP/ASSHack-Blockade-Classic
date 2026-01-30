#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "ServerList.h"
namespace Assembly_CSharp { struct ServerList; };
namespace Assembly_CSharp { struct CServerData; };
namespace mscorlib::System { template <typename T> struct Comparison_1; };
namespace Facebook_Unity::Facebook::Unity { struct IGraphResult; };
namespace Facebook_Unity::Facebook::Unity { template <typename T> struct FacebookDelegate_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace Assembly_CSharp
{
	struct ServerList___c : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			Assembly_CSharp::ServerList___c* __9;
			mscorlib::System::Comparison_1<Assembly_CSharp::CServerData>* __9__17_0;
			Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IGraphResult>* __9__25_0;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		void _ctor();
		int32_t _OnRecvServersList_b__17_0(Assembly_CSharp::CServerData* x, Assembly_CSharp::CServerData* y);
		void _DrawMode_b__25_0(Facebook_Unity::Facebook::Unity::IGraphResult* result);
	};
}

