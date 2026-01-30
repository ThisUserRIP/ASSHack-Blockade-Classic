#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "Vector3i.h"
namespace Assembly_CSharp { struct Vector3i; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "BlockData.h"
namespace Assembly_CSharp { struct BlockData; };

namespace Assembly_CSharp
{
	struct LightComputerUtils : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static void SetLightDirty(Assembly_CSharp::Vector3i pos);
		static void SetChunkLightDirty(Assembly_CSharp::Vector3i chunkPos);
		static int32_t GetLightStep(Assembly_CSharp::BlockData block);
		void _ctor();
	};
}

