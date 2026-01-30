#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace UnityEngine_CoreModule::UnityEngine { struct Texture2D; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace UnityEngine_ImageConversionModule::UnityEngine
{
	struct ImageConversion : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static IL2CPP::Array<uint8_t>* EncodeToPNG(UnityEngine_CoreModule::UnityEngine::Texture2D* tex);
		static IL2CPP::Array<uint8_t>* EncodeToJPG(UnityEngine_CoreModule::UnityEngine::Texture2D* tex, int32_t quality);
		static IL2CPP::Array<uint8_t>* EncodeToJPG(UnityEngine_CoreModule::UnityEngine::Texture2D* tex);
		static bool LoadImage(UnityEngine_CoreModule::UnityEngine::Texture2D* tex, IL2CPP::Array<uint8_t>* data, bool markNonReadable);
		static bool LoadImage(UnityEngine_CoreModule::UnityEngine::Texture2D* tex, IL2CPP::Array<uint8_t>* data);
	};
}

