#pragma once
namespace UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel
{
	enum struct FontEngineError : int32_t
	{
		Success = static_cast<int32_t>(0x0),
		Invalid_File_Path = static_cast<int32_t>(0x1),
		Invalid_File_Format = static_cast<int32_t>(0x2),
		Invalid_File_Structure = static_cast<int32_t>(0x3),
		Invalid_File = static_cast<int32_t>(0x4),
		Invalid_Table = static_cast<int32_t>(0x8),
		Invalid_Glyph_Index = static_cast<int32_t>(0x10),
		Invalid_Character_Code = static_cast<int32_t>(0x11),
		Invalid_Pixel_Size = static_cast<int32_t>(0x17),
		Invalid_Library = static_cast<int32_t>(0x21),
		Invalid_Face = static_cast<int32_t>(0x23),
		Invalid_Library_or_Face = static_cast<int32_t>(0x29),
		Atlas_Generation_Cancelled = static_cast<int32_t>(0x64),
		Invalid_SharedTextureData = static_cast<int32_t>(0x65),
	};
}

