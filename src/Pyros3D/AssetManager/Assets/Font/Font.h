//============================================================================
// Name        : Font.h
// Author      : Duarte Peixinho
// Version     :
// Copyright   : ;)
// Description : Font
//============================================================================

#ifndef FONT_H
#define FONT_H

#include "../IAsset.h"
#include "../Texture/Texture.h"
#include "../../../Core/Logs/Log.h"
#include <ft2build.h>
#include FT_FREETYPE_H
#include FT_GLYPH_H

#define MAP_SIZE 1024

namespace p3d {
    
    struct glyph_properties
    {
        Vec2 offset;
        Vec2 size;
        Vec2 startingPoint;
    };
    
    class Font : public IAsset {
        
        private:
            
            // Font Path
            std::string font;
            
            f32 fontSize;
            
            // Font Map
            uint32 glyphMapHandle;
            Texture glyphMap;
        
            // Glyph Map Data
            uchar glyphMapData[MAP_SIZE*MAP_SIZE];
        
            // Font Glyphs Properties
            std::map<char,glyph_properties> glyphs;
        
            // Last Glyph Pixel Position
            uint32 lastGlyphWidth, lastGlyphRow;
        
            // Free Type Specifics
            FT_Library ft;
            FT_Face face;
            
        public:

            // Create Font
            Font(const std::string &font, const f32 &size);
            
            // Create Text
            // It adds each char to the texture
            void CreateText(const std::string &text);
            
            virtual ~Font();
            
            virtual void Dispose();
            
            Texture GetTexture();
        
            f32 GetFontSize();
        
            std::map<char,glyph_properties> GetGlyphs();
    };
    
};

#endif /* FONT_H */