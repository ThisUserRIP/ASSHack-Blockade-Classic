#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::Collections { struct ArrayList; };
namespace mscorlib::System::Threading { struct Timer; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_TimeSpan.h"
namespace mscorlib::System { struct TimeSpan; };
namespace mscorlib::System::Runtime::Remoting { struct ServerIdentity; };
namespace mscorlib::System { struct Object; };

namespace mscorlib::System::Runtime::Remoting::Lifetime
{
	struct LeaseManager : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::ArrayList* _objects;
		mscorlib::System::Threading::Timer* _timer;
		void SetPollTime(mscorlib::System::TimeSpan timeSpan);
		void TrackLifetime(mscorlib::System::Runtime::Remoting::ServerIdentity* identity);
		void StartManager();
		void StopManager();
		void ManageLeases(mscorlib::System::Object* state);
		void _ctor();
	};
}

