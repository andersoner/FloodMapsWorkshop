<Style name="water_areas">
    <Rule>
      <Filter>[natural] = 'glacier'</Filter>
      &maxscale_zoom6;
      &minscale_zoom7;
      <LineSymbolizer stroke="#9cf" stroke-width="1.5" stroke-dasharray="4,2"/>
      <PolygonPatternSymbolizer file="&symbols;/glacier.png" />
    </Rule>

    <Rule>
      <Filter>[natural] = 'glacier'</Filter>
      &maxscale_zoom8;
      <LineSymbolizer stroke="#9cf" stroke-width="1.5" stroke-dasharray="4,2"/>
      <PolygonPatternSymbolizer file="&symbols;/glacier2.png" />
    </Rule>

    <Rule>
      <Filter>[waterway] = 'dock' or [waterway] = 'mill_pond' or [waterway]='canal'</Filter>
      &maxscale_zoom9;
      <PolygonSymbolizer gamma=".75" fill="#b5d0d0"/>
    </Rule>

    <Rule>
      <Filter>[landuse] = 'basin'</Filter>
      &maxscale_zoom7;
      <PolygonSymbolizer gamma=".75" fill="#b5d0d0"/>
    </Rule>

    <Rule>
      <Filter>[natural] = 'lake' or [natural] = 'water' or [landuse] = 'reservoir' or [waterway] = 'riverbank' or [landuse] = 'water' or [natural]='bay'</Filter>
		&maxscale_zoom7;
      <PolygonSymbolizer gamma=".75" fill="#b5d0d0"/>
    </Rule>

    <Rule>
      <Filter>[natural] = 'mud'</Filter>
      &maxscale_zoom10;
      <PolygonSymbolizer fill="#B35806" />
    </Rule>

    <Rule>
      <Filter>[natural] = 'land'</Filter>
      &maxscale_zoom10;
      <PolygonSymbolizer fill="#f2efe9"/>
    </Rule>
</Style>

<Style name="water-areas-overlay">
    <Rule>
      &maxscale_zoom10;
      <Filter>[natural] = 'marsh' or [natural] = 'wetland'</Filter>
      <PolygonSymbolizer gamma="0.5" fill="#b2abd2" />
    </Rule>
</Style>

<Style name="water-lines-casing">
    <Rule>
      <Filter>[waterway]='stream' or [waterway]='ditch' or [waterway]='drain'</Filter>
      &maxscale_zoom9;
      &minscale_zoom14;
      <LineSymbolizer stroke="white" stroke-width="1.5"/>
      <LineSymbolizer stroke-linejoin="round" stroke="#b5d0d0" stroke-width="2" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[waterway]='stream'</Filter>
      &maxscale_zoom15;
      &minscale_zoom18;
      <LineSymbolizer stroke="white" stroke-width="2.5"/>
    </Rule>
</Style>

<Style name="water-lines-low-zoom">
    <Rule>
      <Filter>[waterway]='river'</Filter>
      &maxscale_zoom8;
      &minscale_zoom8;
      <LineSymbolizer stroke="#b5d0d0" stroke-width="0.7"/>
    </Rule>
    <Rule>
      <Filter>[waterway]='river'</Filter>
      &maxscale_zoom9;
      &minscale_zoom9;
      <LineSymbolizer stroke="#b5d0d0" stroke-width="1.2"/>
    </Rule>
    <Rule>
      <Filter>[waterway]='river'</Filter>
      &maxscale_zoom10;
      &minscale_zoom11;
      <LineSymbolizer stroke="#b5d0d0" stroke-width="1.6"/>
    </Rule>
</Style>

<Style name="water_lines">
    <Rule>
      <Filter>[waterway]='weir'</Filter>
      &maxscale_zoom15;
      &minscale_zoom18;
      <LineSymbolizer stroke-linejoin="round" stroke="#aaa" stroke-width="2" stroke-linecap="round"/>
    </Rule>
    
	<Rule>
      <Filter>[waterway]='wadi'</Filter>
      &maxscale_zoom13;
      &minscale_zoom15;
      <LineSymbolizer stroke-linejoin="round" stroke-dasharray="4,4" stroke="#b5d0d0" stroke-width="1" stroke-linecap="round"/>
    </Rule>
    
	<Rule>
      <Filter>[waterway]='wadi'</Filter>
      &maxscale_zoom16;
      <LineSymbolizer stroke-linejoin="round" stroke-dasharray="4,4" stroke="#b5d0d0" stroke-width="2" stroke-linecap="round"/>
    </Rule>
    
	<Rule>
      <Filter>[waterway]='river'</Filter>
      &maxscale_zoom8;
      &minscale_zoom12;
      <LineSymbolizer stroke-linejoin="round" stroke="#b5d0d0" stroke-width="2" stroke-linecap="round"/>
    </Rule>
    
	<Rule>
      <Filter>[waterway]='river'</Filter>
      &maxscale_zoom13;
      &minscale_zoom13;
      <LineSymbolizer stroke-linejoin="round" stroke="#b5d0d0" stroke-width="3" stroke-linecap="round"/>
      <TextSymbolizer size="9" fill="#6699cc" placement="line" spacing="400" fontset-name="book-fonts" halo-radius="1">[name]</TextSymbolizer>
    </Rule>
    
	<Rule>
      <Filter>[waterway]='river'</Filter>
      &maxscale_zoom14;
      &minscale_zoom14;
      <LineSymbolizer stroke-linejoin="round" stroke="#b5d0d0" stroke-width="5" stroke-linecap="round"/>
      <TextSymbolizer size="10" fill="#6699cc" placement="line" spacing="400" fontset-name="book-fonts" halo-radius="1">[name]</TextSymbolizer>
    </Rule>

	<Rule>
      <Filter>[waterway]='river'</Filter>
      &maxscale_zoom15;
      &minscale_zoom16;
      <LineSymbolizer stroke-linejoin="round" stroke="#b5d0d0" stroke-width="6" stroke-linecap="round"/>
      <TextSymbolizer size="10" fill="#6699cc" placement="line" spacing="400" fontset-name="book-fonts" halo-radius="1">[name]</TextSymbolizer>
    </Rule>

    <Rule>
      <Filter>[waterway]='river'</Filter>
      &maxscale_zoom17;
      &minscale_zoom17;
      <LineSymbolizer stroke-linejoin="round" stroke="#b5d0d0" stroke-width="10" stroke-linecap="round"/>
      <TextSymbolizer size="10" fill="#6699cc" placement="line" spacing="400" fontset-name="book-fonts" halo-radius="1">[name]</TextSymbolizer>
    </Rule>

    <Rule>
      <Filter>[waterway]='river'</Filter>
      &maxscale_zoom18;
      &minscale_zoom18;
      <LineSymbolizer stroke-linejoin="round" stroke="#b5d0d0" stroke-width="12" stroke-linecap="round"/>
      <TextSymbolizer size="10" fill="#6699cc" placement="line" spacing="400" fontset-name="book-fonts" halo-radius="1">[name]</TextSymbolizer>
    </Rule>

    <Rule>
      <Filter>[waterway]='canal' and not [disused]='yes'</Filter>
      &maxscale_zoom12;
      &minscale_zoom12;
      <LineSymbolizer stroke-linejoin="round" stroke="#b5d0d0" stroke-width="3" stroke-linecap="round"/>
    </Rule>

    <Rule>
      <Filter>[waterway]='canal' and not [disused]='yes'</Filter>
      &maxscale_zoom13;
      &minscale_zoom13;
      <LineSymbolizer stroke-linejoin="round" stroke="#b5d0d0" stroke-width="4" stroke-linecap="round"/>
      <TextSymbolizer size="8" fill="#6699cc" placement="line" fontset-name="book-fonts" halo-radius="1">[name]</TextSymbolizer>
    </Rule>

    <Rule>
      <Filter>[waterway]='stream' or [waterway]='ditch' or [waterway]='drain'</Filter>
      &maxscale_zoom9;
      &minscale_zoom14;
      <LineSymbolizer stroke="#b5d0d0" stroke-width="2"/>
    </Rule>

    <Rule>
      <Filter>[waterway]='river' and [tunnel] = 'yes'</Filter>
      &maxscale_zoom14;
      &minscale_zoom14;
      <LineSymbolizer stroke="#b5d0d0" stroke-width="6" stroke-dasharray="4,2"/>
      <LineSymbolizer stroke="white" stroke-width="4"/>
      <TextSymbolizer size="10" fill="#6699cc" placement="line" minimum-distance="200" fontset-name="book-fonts" halo-radius="1">[name]</TextSymbolizer>
    </Rule>

	<Rule>
      <Filter>[waterway]='river' and [tunnel] = 'yes'</Filter>
      &maxscale_zoom15;
      &minscale_zoom16;
      <LineSymbolizer stroke="#b5d0d0" stroke-width="7" stroke-dasharray="4,2"/>
      <!-- <LineSymbolizer stroke="white" stroke-width="4"/> -->
      <TextSymbolizer size="10" fill="#6699cc" placement="line" minimum-distance="200" fontset-name="book-fonts" halo-radius="1">[name]</TextSymbolizer>
    </Rule>

    <Rule>
      <Filter>[waterway]='river' and [tunnel] = 'yes'</Filter>
      &maxscale_zoom17;
      &minscale_zoom17;
      <LineSymbolizer stroke="#b5d0d0" stroke-width="11" stroke-dasharray="4,2"/>
      <LineSymbolizer stroke="white" stroke-width="7"/>
      <TextSymbolizer size="10" fill="#6699cc" placement="line" minimum-distance="200" fontset-name="book-fonts" halo-radius="1">[name]</TextSymbolizer>
    </Rule>

    <Rule>
      <Filter>[waterway]='river' and [tunnel] = 'yes'</Filter>
      &maxscale_zoom18;
      <LineSymbolizer stroke="#b5d0d0" stroke-width="13" stroke-dasharray="4,2"/>
      <LineSymbolizer stroke="white" stroke-width="9"/>
      <TextSymbolizer size="10" fill="#6699cc" placement="line" minimum-distance="200" fontset-name="book-fonts" halo-radius="1">[name]</TextSymbolizer>
    </Rule>

    <Rule>
      <Filter>[waterway]='canal' and [tunnel] = 'yes'</Filter>
      &maxscale_zoom14;
      &minscale_zoom16;
      <LineSymbolizer stroke="#b5d0d0" stroke-width="7" stroke-dasharray="4,2"/>
      <LineSymbolizer stroke="white" stroke-width="3"/>
      <TextSymbolizer size="9" fill="#6699cc" placement="line" fontset-name="book-fonts" halo-radius="1">[name]</TextSymbolizer>
    </Rule>

    <Rule>
      <Filter>[waterway]='canal' and not ([tunnel] = 'yes' or [disused]='yes')</Filter>
      &maxscale_zoom14;
      &minscale_zoom16;
      <LineSymbolizer stroke-linejoin="round" stroke="#b5d0d0" stroke-width="7" stroke-linecap="round"/>
      <TextSymbolizer size="9" fill="#6699cc" placement="line" fontset-name="book-fonts" halo-radius="1">[name]</TextSymbolizer>
    </Rule>

    <Rule>
      <Filter>[waterway]='canal' and [tunnel] = 'yes'</Filter>
      &maxscale_zoom17;
      &minscale_zoom18;
      <LineSymbolizer stroke="#b5d0d0" stroke-width="11" stroke-dasharray="4,2"/>
      <LineSymbolizer stroke="white" stroke-width="7"/>
      <TextSymbolizer size="9" fill="#6699cc" placement="line" fontset-name="book-fonts" halo-radius="1">[name]</TextSymbolizer>
    </Rule>

    <Rule>
      <Filter>[waterway]='canal' and not ([tunnel] = 'yes' or [disused]='yes' or [lock]='yes')</Filter>
      &maxscale_zoom17;
      &minscale_zoom18;
      <LineSymbolizer stroke-linejoin="round" stroke="#b5d0d0" stroke-width="11" stroke-linecap="round"/>
      <TextSymbolizer size="9" fill="#6699cc" placement="line" fontset-name="book-fonts" halo-radius="1">[name]</TextSymbolizer>
    </Rule>

    <Rule>
      <Filter>[waterway]='canal' and not ([tunnel] = 'yes' or [disused]='yes') and [lock]='yes'</Filter>
      &maxscale_zoom17;
      &minscale_zoom18;
      <LineSymbolizer stroke-linejoin="round" stroke="#b5d0d0" stroke-width="7" stroke-linecap="round"/>
      <TextSymbolizer size="9" fill="#6699cc" fontset-name="book-fonts" halo-radius="1" wrap-width="20">[name]</TextSymbolizer>
    </Rule>

    <Rule>
      <Filter>[waterway]='derelict_canal' or ([waterway]='canal' and [disused]='yes')</Filter>
      &maxscale_zoom12;
      &minscale_zoom12;
      <LineSymbolizer stroke-linejoin="round" stroke-opacity="0.5" stroke="#b5e4d0" stroke-linecap="round" stroke-dasharray="4,4" stroke-width="1.5"/>
    </Rule>

    <Rule>
      <Filter>[waterway]='derelict_canal' or ([waterway]='canal' and [disused]='yes')</Filter>
      &maxscale_zoom13;
      &minscale_zoom13;
      <LineSymbolizer stroke-linejoin="round" stroke-opacity="0.5" stroke="#b5e4d0" stroke-linecap="round" stroke-dasharray="4,6" stroke-width="2.5"/>
      <TextSymbolizer size="9" fill="#80d1ae" spacing="600" placement="line" fontset-name="book-fonts" halo-radius="1">[name]</TextSymbolizer>
    </Rule>

    <Rule>
      <Filter>[waterway]='derelict_canal' or ([waterway]='canal' and [disused]='yes')</Filter>
      &maxscale_zoom14;
      &minscale_zoom18;
      <LineSymbolizer stroke-linejoin="round" stroke-opacity="0.5" stroke="#b5e4d0" stroke-linecap="round" stroke-dasharray="4,8" stroke-width="4.5"/>
      <TextSymbolizer size="10" fill="#80d1ae" spacing="600" placement="line" fontset-name="book-fonts" halo-radius="1">[name]</TextSymbolizer>
    </Rule>

    <Rule>
      <Filter>[waterway]='stream' and [tunnel]='yes'</Filter>
      &maxscale_zoom15;
      &minscale_zoom18;
      <LineSymbolizer stroke="#b5d0d0" stroke-width="2.4" stroke-dasharray="4,2"/>
      <LineSymbolizer stroke="#f3f7f7" stroke-width="1.2"/>
    </Rule>

    <Rule>
      <Filter>([waterway]='drain' or [waterway]='ditch') and [tunnel]='yes'</Filter>
      &maxscale_zoom15;
      &minscale_zoom18;
      <LineSymbolizer stroke="#b5d0d0" stroke-width="2" />
      <LineSymbolizer stroke="#f3f7f7" stroke-width="1"/>
    </Rule>

    <Rule>
      <Filter>([waterway]='drain' or [waterway]='ditch') and not [tunnel]='yes'</Filter>
      &maxscale_zoom15;
      &minscale_zoom18;
      <LineSymbolizer stroke-linejoin="round" stroke="#b5d0d0" stroke-width="5" stroke-linecap="round"/>
      <TextSymbolizer size="8" fill="#6699cc" spacing="600" placement="line" fontset-name="book-fonts" halo-radius="1">[name]</TextSymbolizer>
    </Rule>
</Style>

<Layer name="water-lines-casing" status="on" srs="&osm2pgsql_projection;">
    <StyleName>water-lines-casing</StyleName>
    <Datasource>
      <Parameter name="table">
      (select way,waterway
      from &prefix;_line
      where waterway in ('stream','drain','ditch')
      ) as water_lines</Parameter>
      &datasource-settings;
    </Datasource>
</Layer>

<Layer name="water_areas" status="on" srs="&osm2pgsql_projection;">
    <StyleName>water_areas</StyleName>
    <Datasource>
      <Parameter name="table">
      (select way,"natural",waterway,landuse,name
      from &prefix;_polygon
      where (waterway in ('dock','mill_pond','riverbank','canal')
         or landuse in ('reservoir','water','basin')
         or "natural" in ('lake','water','land','glacier','mud','bay'))
      order by z_order,way_area desc
      ) as water_areas</Parameter>
      &datasource-settings;
    </Datasource>
</Layer>

<Layer name="water_lines" status="on" srs="&osm2pgsql_projection;">
    <StyleName>water_lines</StyleName>
    <Datasource>
      <Parameter name="table">
      (select way,waterway,disused,lock,name,
      case when tunnel in ('yes','true','1') then 'yes'::text else tunnel end as tunnel
      from &prefix;_line
      where waterway in ('weir','canal','river','derelict_canal','stream','drain','ditch','wadi')
        and (bridge is null or bridge not in ('yes','true','1','aqueduct'))
      order by z_order
      ) as water_lines</Parameter>
      &datasource-settings;
    </Datasource>
</Layer>