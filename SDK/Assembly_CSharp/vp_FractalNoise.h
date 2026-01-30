#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Assembly_CSharp { struct vp_Perlin; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp
{
	struct vp_FractalNoise : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::vp_Perlin* m_Noise;
		IL2CPP::Array<float>* m_Exponent;
		int32_t m_IntOctaves;
		float m_Octaves;
		float m_Lacunarity;
		void _ctor(float inH, float inLacunarity, float inOctaves);
		void _ctor(float inH, float inLacunarity, float inOctaves, Assembly_CSharp::vp_Perlin* noise);
		float HybridMultifractal(float x, float y, float offset);
		float RidgedMultifractal(float x, float y, float offset, float gain);
		float BrownianMotion(float x, float y);
	};
}

