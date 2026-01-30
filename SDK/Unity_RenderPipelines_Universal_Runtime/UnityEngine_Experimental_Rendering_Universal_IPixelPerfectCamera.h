#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal
{
	struct IPixelPerfectCamera
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t get_assetsPPU();
		void set_assetsPPU(int32_t value);
		int32_t get_refResolutionX();
		void set_refResolutionX(int32_t value);
		int32_t get_refResolutionY();
		void set_refResolutionY(int32_t value);
		bool get_upscaleRT();
		void set_upscaleRT(bool value);
		bool get_pixelSnapping();
		void set_pixelSnapping(bool value);
		bool get_cropFrameX();
		void set_cropFrameX(bool value);
		bool get_cropFrameY();
		void set_cropFrameY(bool value);
		bool get_stretchFill();
		void set_stretchFill(bool value);
	};
}

