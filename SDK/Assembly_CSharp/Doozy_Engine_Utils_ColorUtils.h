#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace Assembly_CSharp::Doozy::Engine::Utils::ColorModels { struct RGB; };
namespace Assembly_CSharp::Doozy::Engine::Utils::ColorModels { struct HSL; };
namespace Assembly_CSharp::Doozy::Engine::Utils::ColorModels { struct HSV; };
namespace Assembly_CSharp::Doozy::Engine::Utils::ColorModels { struct CMY; };
namespace Assembly_CSharp::Doozy::Engine::Utils::ColorModels { struct CMYK; };
namespace Assembly_CSharp::Doozy::Engine::Utils::ColorModels { struct XYZ; };

namespace Assembly_CSharp::Doozy::Engine::Utils
{
	struct ColorUtils : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static UnityEngine_CoreModule::UnityEngine::Vector3 HUEtoRGB(float H);
		static Assembly_CSharp::Doozy::Engine::Utils::ColorModels::RGB* HSLtoRGB(Assembly_CSharp::Doozy::Engine::Utils::ColorModels::HSL* values);
		static Assembly_CSharp::Doozy::Engine::Utils::ColorModels::HSL* RGBtoHSL(Assembly_CSharp::Doozy::Engine::Utils::ColorModels::RGB* values);
		static Assembly_CSharp::Doozy::Engine::Utils::ColorModels::RGB* HSVtoRGB(Assembly_CSharp::Doozy::Engine::Utils::ColorModels::HSV* values);
		static Assembly_CSharp::Doozy::Engine::Utils::ColorModels::HSV* RGBtoHSV(Assembly_CSharp::Doozy::Engine::Utils::ColorModels::RGB* values);
		static Assembly_CSharp::Doozy::Engine::Utils::ColorModels::RGB* CMYtoRGB(Assembly_CSharp::Doozy::Engine::Utils::ColorModels::CMY* values);
		static Assembly_CSharp::Doozy::Engine::Utils::ColorModels::CMY* RGBtoCMY(Assembly_CSharp::Doozy::Engine::Utils::ColorModels::RGB* values);
		static Assembly_CSharp::Doozy::Engine::Utils::ColorModels::RGB* CMYKtoRGB(Assembly_CSharp::Doozy::Engine::Utils::ColorModels::CMYK* values);
		static Assembly_CSharp::Doozy::Engine::Utils::ColorModels::CMYK* RGBtoCMYK(Assembly_CSharp::Doozy::Engine::Utils::ColorModels::RGB* values);
		static Assembly_CSharp::Doozy::Engine::Utils::ColorModels::RGB* XYZtoRGB(Assembly_CSharp::Doozy::Engine::Utils::ColorModels::XYZ* values);
		static Assembly_CSharp::Doozy::Engine::Utils::ColorModels::XYZ* RGBtoXYZ(Assembly_CSharp::Doozy::Engine::Utils::ColorModels::RGB* values);
	};
}

