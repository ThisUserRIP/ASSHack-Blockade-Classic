#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Int16.h"
namespace mscorlib::System { struct Int16; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp
{
	struct PerlinNoise3D : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* gradients;
		IL2CPP::Array<int16_t>* perm;
		float scale;
		struct StaticFields
		{
			int32_t GradientSizeTable;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(float scale);
		float Noise(float x, float y, float z);
		float PerlinNoise(float x, float y, float z);
		int32_t Index(int32_t ix, int32_t iy, int32_t iz);
		int32_t Permutate(int32_t x);
		float Lattice(int32_t ix, int32_t iy, int32_t iz, float fx, float fy, float fz);
		static float Smooth(float x);
	};
}

