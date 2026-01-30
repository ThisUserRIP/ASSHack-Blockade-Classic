#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Doozy_Engine_Nody_Connections_PassthroughConnection.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Assembly_CSharp::Doozy::Engine::Nody::Models { struct Socket; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Doozy::Engine::UI::Connections
{
	struct WeightedConnection : Assembly_CSharp::Doozy::Engine::Nody::Connections::PassthroughConnection
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t Weight;
		struct StaticFields
		{
			int32_t DEFAULT_WEIGHT;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static Assembly_CSharp::Doozy::Engine::UI::Connections::WeightedConnection* GetValue(Assembly_CSharp::Doozy::Engine::Nody::Models::Socket* socket);
		static void SetValue(Assembly_CSharp::Doozy::Engine::Nody::Models::Socket* socket, Assembly_CSharp::Doozy::Engine::UI::Connections::WeightedConnection* value);
		void _ctor();
	};
}

