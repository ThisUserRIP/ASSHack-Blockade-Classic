#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\Unity_Mathematics\Unity_Mathematics_float4.h"
namespace Unity_Mathematics::Unity::Mathematics { struct float4; };

namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal
{
	struct PreTile
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Unity_Mathematics::Unity::Mathematics::float4 planeLeft;
		Unity_Mathematics::Unity::Mathematics::float4 planeRight;
		Unity_Mathematics::Unity::Mathematics::float4 planeBottom;
		Unity_Mathematics::Unity::Mathematics::float4 planeTop;
	};
}

